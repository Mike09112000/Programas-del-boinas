/*
Programa 8 
Promedios
Miguel Angel Alfaro Duran 
2025110348
7/5/2026
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(65001);
    char resp;
    system ("cls");
printf("\n                    xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
printf("\n                    x                               INSTITUTO POLITECNICO NACIONAL                                x");
printf("\n                    x                    CENTRO DE ESTUDIOS CIENTIFICOS Y TECNOLOGICOS NUMERO 11                  x");
printf("\n                    x                                 \"WILFRIDO MASSIEU PEREZ\"                                    x");
printf("\n                    x                                   TELECOMUNNICACIONES                                       x");
printf("\n                    x                                     TURNO MATUTINO                                          x");
printf("\n                    x                                          4IM14                                              x");
printf("\n                    x                           TIT. CABRERA ZAVALA SERGIO ENRRIQUE                               x");
printf("\n                    x                            AUX. LOBATO ARIAS CYNTHIA YVONNE                                 x");
printf("\n                    x                           AUX. ARIAS CANDANDOSA EDGAR FELIPE                                x");
printf("\n                    x                                       PROMEDIOS                                             x");
printf("\n                    x                                      PRACTICA #8                                            x");
printf("\n                    x                                  BOLETA: 2025110348                                         x");
printf("\n                    x                               MIGUEL ANGEL ALFARO DURAN                                     x");
printf("\n                    x                                       7/5/2026                                              x");    
printf("\n                    xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");    
printf("\n");
printf("\n\nPresione cualquier tecla para continuar...");
    getch();
    do{
        system("cls");
        printf("\n\n Este programa calcula el promedio de 9 materias con tres parciales cada una");
        const char *nombres_mat[] = {"Matematicas", "Quimica", "Electronica Analogica", "Dibujo Tecnico", "Diseño Digital", "Ingles", "Fisica", "Programacion", "Sistemas de Video"};
        int i,j;
        float calificaciones[9][3], promedios[9], final=0;
        for (i = 0; i < 9; i++) {
            float suma_materia = 0;
            system("cls");
            printf("\n--- Materia: %s ---\n", nombres_mat[i]);

            for (j = 0; j < 3; j++) {
                printf(" Ingrese calificacion parcial %d: ", j + 1);
                scanf("%f", &calificaciones[i][j]);
                suma_materia += calificaciones[i][j];
            }
            
            promedios[i] = suma_materia / 3.0;
        }
        system("cls");
        printf("\nPromedios por materia\n");
        printf("\n%-30s | %-10s\n", "MATERIA", "PROMEDIO");
        printf("------------------------------------------\n");
        for (i = 0; i < 9; i++) {
            printf("%-30s | %.2f\n", nombres_mat[i], promedios[i]);
            final += promedios[i];
        }
        printf("------------------------------------------\n");
        printf("PROMEDIO GENERAL: %.2f\n", final / 9.0);
        printf("\nDesea calcular otro promedio? (s/n): ");
        scanf(" %c", &resp);
    }while (resp=='s'||resp=='S');    
return 0;
}
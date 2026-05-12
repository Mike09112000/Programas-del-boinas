/*
Programa 5 
RESOLUCION DE ECUACIONES DE SEGUNDO GRADO
Miguel Angel Alfaro Duran 
2025110348
7/5/2026
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
    char resp, opc1, opc2, opc3, opc4, opc5, opc6;
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
printf("\n                    x                         RESOLUCION DE ECUACIONES DE SEGUNDO GRADO                           x");
printf("\n                    x                                      PRACTICA #6                                            x");
printf("\n                    x                                  BOLETA: 2025110348                                         x");
printf("\n                    x                               MIGUEL ANGEL ALFARO DURAN                                     x");
printf("\n                    x                                       7/5/2026                                              x");    
printf("\n                    xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");    
printf("\n");
printf("\n\nPresione cualquier tecla para continuar...");
    getch();
    do{
        system("cls");
        printf("\n\n Este programa resuelve ecuaciones de segundo grado");
        float a, b, c, discriminante, raiz1, raiz2, XR;
        printf("\n\n Ingrese el valor de a: ");
        scanf("%f", &a);
        printf("\n\n Ingrese el valor de b: ");
        scanf("%f", &b);
        printf("\n\n Ingrese el valor de c: ");
        scanf("%f", &c);
        discriminante = b * b - 4 * a * c;
        if (discriminante < 0) {
            printf("\n\n La ecuacion no tiene soluciones reales");
            printf("\n\n Los resultados son:");
            printf("\n\n a=%.2f, b=%.2f, c=%.2f", a, b, c);
            printf("\n\n La raiz real es: %.2f", -b / (2 * a));
            printf("\n\n La parte imaginaria es: %.2f", sqrt(-discriminante) / (2 * a));
        } else {
            raiz1 = (-b + sqrt(discriminante)) / (2 * a);
            raiz2 = (-b - sqrt(discriminante)) / (2 * a);
            printf("\n\n Los resultados son:");
            printf("\n\n a=%.2f, b=%.2f, c=%.2f", a, b, c);
            printf("\n\n X1: %.2f", raiz1);
            printf("\n\n X2: %.2f", raiz2);
        }
        getch();
        printf("\n\n Desea resolver otra ecuacion? (s/n): ");
        scanf(" %c", &resp);
    } while (resp=='s'||resp=='S');
return 0; 
}
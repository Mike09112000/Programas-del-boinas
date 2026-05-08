/*
Programa 5 
Menu selectivo con funciones
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
printf("\n                    x                             MENU SELECTIVO CON FUNCIONES                                    x");
printf("\n                    x                                      PRACTICA #5                                            x");
printf("\n                    x                                  BOLETA: 2025110348                                         x");
printf("\n                    x                               MIGUEL ANGEL ALFARO DURAN                                     x");
printf("\n                    x                                       7/5/2026                                              x");    
printf("\n                    xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");    
printf("\n");
printf("\n\nPresione cualquier tecla para continuar...");
    getch();
    do{
        int opc;
        system("cls");
        printf("Menu de opciones:\n");
        printf("1. Calculo del perimetro de un trapezoide\n");
        printf("2. Furerza de atraccio entre dos cargas\n");
        printf("3. Calculo del volumen de un cubo\n");
        printf("4. Calculo de un circuito resistivo de multiples resistencias\n");
        printf("5. Calculo del promedio de una materia con tres parciales\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                //Codigo para opcion 1
                do{
                    system("cls");
                    float baseMayor, baseMenor, altura, lado1, lado2, perimetro;
                    printf("\n Usted selecciono la opcion 1, para calcular el perimetro de un trapezoide\n");
                    printf("\n Ingrese la base mayor del trapezoide: ");
                    scanf("%f", &baseMayor);
                    printf("\n Ingrese la base menor del trapezoide: ");
                    scanf("%f", &baseMenor);
                    printf("\n Ingrese la altura del trapezoide: ");
                    scanf("%f", &altura);
                    printf("\n Ingrese el lado 1 del trapezoide: ");
                    scanf("%f", &lado1);
                    printf("\n Ingrese el lado 2 del trapezoide: ");
                    scanf("%f", &lado2);
                    perimetro = baseMayor + baseMenor + lado1 + lado2;
                    printf("\n El perimetro del trapezoide es: %.2f\n", perimetro);
                    getch();
                    printf("\n Desea realizar otro calculo? (s/n): ");
                    scanf(" %c", &opc1);
                }while(opc1=='s'||opc1=='S');
                break;
            case 2:
                //Codigo para opcion 2
                do{
                    system("cls");
                    printf("\n Usted selecciono la opcion 2, para calcular la fuerza de atraccion entre dos cargas\n");
                    float carga1, carga2, distancia, fuerza;
                    printf("\n Ingrese la carga 1 (en Coulombs): ");
                    scanf("%f", &carga1);
                    printf("\n Ingrese la carga 2 (en Coulombs): ");
                    scanf("%f", &carga2);
                    printf("\n Ingrese la distancia entre las cargas (en metros): ");
                    scanf("%f", &distancia);
                    fuerza = (8.99e9 * carga1 * carga2) / (distancia * distancia);
                    printf("\n La fuerza de atraccion entre las cargas es: %.2e Newtons\n", fuerza);
                    getch();
                    printf("\n Desea realizar otro calculo? (s/n): ");
                    scanf(" %c", &opc2);
                }while(opc2=='s'||opc2=='S');
                break;
            case 3:
                //Codigo para opcion 3
                do{
                    system("cls");
                    printf("\n Usted selecciono la opcion 3, para calcular el volumen de un cubo\n");
                    float lado, volumen;
                    printf("\n Ingrese el lado del cubo: ");
                    scanf("%f", &lado);
                    volumen = lado * lado * lado;
                    printf("\n El volumen del cubo es: %.2f\n", volumen);
                    getch();
                    printf("\n Desea realizar otro calculo? (s/n): ");
                    scanf(" %c", &opc3);
                }while(opc3=='s'||opc3=='S');
                break;
            case 4:
                //Codigo para opcion 4
                do{
                    system("cls");
                    printf("\n Usted selecciono la opcion 4, para calcular un circuito resistivo de multiples resistencias\n");
                    int i;
                    float r[100], rTotal[100];
                    printf("\n Ingrese el numero de resistencias en serie: ");
                    scanf("%d", &i);
                    for(int j=0; j<i; j++){
                        printf("\n Ingrese el valor de la resistencia %d (en ohmios): ", j+1);
                        scanf("%f", &r[j]);
                    }
                    rTotal[0] = r[0];
                    for(int j=1; j<i; j++){
                        rTotal[j] = rTotal[j-1] + r[j];
                    }
                    printf("\n La resistencia total del circuito es: %.2f ohmios\n", rTotal[i-1]);
                    getch();
                    printf("\n Desea realizar otro calculo? (s/n): ");
                    scanf(" %c", &opc4);
                }while(opc4=='s'||opc4=='S');
                break;
            case 5:
                //Codigo para opcion 5
                do{
                    system("cls");
                    printf("\n Usted selecciono la opcion 5, para calcular el promedio de una materia con tres parciales\n");
                    float parcial1, parcial2, parcial3, promedio;
                    printf("\n Ingrese la calificacion del primer parcial: ");
                    scanf("%f", &parcial1);
                    printf("\n Ingrese la calificacion del segundo parcial: ");
                    scanf("%f", &parcial2);
                    printf("\n Ingrese la calificacion del tercer parcial: ");
                    scanf("%f", &parcial3);
                    promedio = (parcial1 + parcial2 + parcial3) / 3;
                    printf("\n El promedio de la materia es: %.2f\n", promedio);
                    getch();
                    printf("\n Desea realizar otro calculo? (s/n): ");
                    scanf(" %c", &opc5);
                }while(opc5=='s'||opc5=='S');
                break;
            case 6:
                return 0;
            default:
                printf("Opcion no valida\n");
                break;
        }
        printf("\n Desea regresar al menu principal? (s/n): ");
        scanf(" %c", &resp);
    }while(resp=='s' || resp=='S');
    return 0;
}
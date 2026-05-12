/*
Programa 7 
Circuito Serie y Paralelo
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
    char resp, resp2, resp3;
    int i, opc;
    float res[100], volt[100], corr[100], pot[100];
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
printf("\n                    x                               CIRCUITO SERIE Y PARALELO                                     x");
printf("\n                    x                                      PRACTICA #7                                            x");
printf("\n                    x                                  BOLETA: 2025110348                                         x");
printf("\n                    x                               MIGUEL ANGEL ALFARO DURAN                                     x");
printf("\n                    x                                       7/5/2026                                              x");    
printf("\n                    xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");    
printf("\n");
printf("\n\nPresione cualquier tecla para continuar...");
    getch();
do{
        system("cls");
        printf("\n\n Este programa calcula la resistencia total, voltaje total, corriente total y potencia total de un circuito serie o paralelo");
        printf("\n\n Ingrese el numero de resistencias en el circuito: ");
        scanf("%d", &i);
        for(int j=0; j<i; j++){
            printf("\n\n Ingrese el valor de la resistencia %d (en ohmios): ", j+1);
            scanf("%f", &res[j]);
            printf("\n\n Ingrese el valor del voltaje %d (en voltios): ", j+1);
            scanf("%f", &volt[j]);
            printf("\n\n Ingrese el valor de la corriente %d (en amperios): ", j+1);
            scanf("%f", &corr[j]);
            pot[j] = volt[j] * corr[j];
        }
        printf("\n\n Seleccione el tipo de circuito:\n");
        printf("1. Serie\n");
        printf("2. Paralelo\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            do{
                system("cls");
                float resTotal = 0, voltTotal = 0, corrTotal = 0, potTotal = 0;
                for(int j=0; j<i; j++){
                    resTotal += res[j];
                    voltTotal += volt[j];
                    corrTotal += corr[j];
                    potTotal += pot[j];
                }
                printf("\n\n La resistencia total del circuito en serie es: %.2f ohmios", resTotal);
                printf("\n\n El voltaje total del circuito en serie es: %.2f voltios", voltTotal);
                printf("\n\n La corriente total del circuito en serie es: %.2f amperios", corrTotal);
                printf("\n\n La potencia total del circuito en serie es: %.2f vatios", potTotal);
                printf("\n\n Desea realizar otro calculo? (s/n): ");
                scanf(" %c", &resp2);
            }while(resp2=='s'||resp2=='S');
            break;
        case 2:
            do{
                system("cls");
                float resTotal = 0, voltTotal = 0, corrTotal = 0, potTotal = 0;
                for(int j=0; j<i; j++){
                    resTotal += 1/res[j];
                    voltTotal += volt[j];
                    corrTotal += corr[j];
                    potTotal += pot[j];
                }
                resTotal = 1/resTotal;
                printf("\n\n La resistencia total del circuito en paralelo es: %.2f ohmios", resTotal);
                printf("\n\n El voltaje total del circuito en paralelo es: %.2f voltios", voltTotal);
                printf("\n\n La corriente total del circuito en paralelo es: %.2f amperios", corrTotal);
                printf("\n\n La potencia total del circuito en paralelo es: %.2f vatios", potTotal);
                printf("\n\n Desea realizar otro calculo? (s/n): ");
                scanf(" %c", &resp3);
            }while(resp3=='s'||resp3=='S');
            break;
        
        default:
            break;
        }
        printf("\n\n Desea resolver otro circuito? (s/n): ");
        scanf(" %c", &resp);
}while(resp=='s'||resp=='S');
return 0;
}
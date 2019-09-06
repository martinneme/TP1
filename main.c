#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){

/* ACA VAN LAS VARIABLES DE MAIN ,INCLUSIVE LAS QUE USARA PARA RECUPERAR Y REGISTRAR VALORES DE FUNCIONES */
int opcion; /*registra la opcion del menu  */
int primerValor; /*registra y guarda el primer valor que vendra de la funcion PedirValor() */
int segundoValor;/*registra y guarda el segundo valor que vendra de la funcion PedirValor() */
int resSuma;/*registra y guarda el resultado de la operacion realizada en la funcion suma() */
int resResta;/*registra y guarda el resultado de la operacion realizada en la funcion resta()  */
int resMult;/* registra y guarda el resultado de la operacion realizada en la funcion multiplica() */
int flagImp1=0; /*registra si el operador ingreso el primer valor 1 para si, 0 para no */
int flagImp2=0;/*registra si el operador ingreso el segundo valor 1 para si, 0 para no */
int flagControl=0;/*registra si el operador ingreso ambos valores */
int flagControlCal=0; /*registra si el operador ingreso a la opcion 3 */
int flagDivCero=0; /*registra si el operador ingreso como segundo valor un 0 para el caso de la division */
int flagfact1=0; /*Registra si ingreso el primer valor  negativo para evitar la funcion factorial() */
int flagfact2=0; /*Registra si ingreso el segundo valor negativo  para evitar la funcion factorial() */
float resDiv;/* registra y guarda el resultado de la operacion realizada en la funcion divide()*/
long int resFactv1;/*registra y guarda el resultado de la operacion realizada en la funcion factorial() para el primerValor  */
long int resFactv2;/*registra y guarda el resultado de la operacion realizada en la funcion factorial() para el segundoValor */


do{

system("cls");

printf("----------CALCULADORA------------\n");
printf("1-    -INGRESAR PRIMER VALOR\n");
printf("2-    -INGRESAR SEGUNDO VALOR\n");
printf("3-    -CALCULAR\n");
printf("4-    -MOSTRAR RESULTADOS\n");
printf("5-    -SALIR\n");
if(flagImp1==1 && flagImp2==1 ){
printf("----------------------------------- \n");
printf("PRIMER VALOR %d  | SEGUNDO VALOR %d \n",primerValor,segundoValor);
printf("----------------------------------- \n");
flagControl=1;
}
else
{
printf("----------------------------------- \n");
printf("PRIMER VALOR X  | SEGUNDO VALOR X \n");
printf("----------------------------------- \n");
}
scanf("%d",&opcion);






    switch(opcion)
    {
        case 1: GetInt(&primerValor,"Ingrese el primer valor : \n");
                printf("el valor ingresado es %d \n",primerValor);
                flagImp1=1;

                system("pause");
                break;
        case 2:GetInt(&segundoValor,"Ingrese el segundo valor: \n");
                printf("el valor ingresado es %d \n",segundoValor);
                flagImp2=1;

                system("pause");
                break;
        case 3:if(flagControl==1)
                {
                     if(segundoValor==0){
                          printf("**No puede dividir por 0** - OPERACIONES REALIZADAS \n");
                         flagControlCal=1;
                         flagDivCero=1;
                        system("pause");
                        }
                    else{
                      printf("**OPERACIONES REALIZADAS ** \n");
                        suma(primerValor,segundoValor,&resSuma);
                        resta(primerValor,segundoValor,&resResta);
                        multiplica(primerValor,segundoValor,&resMult);
                        divide(primerValor,segundoValor,&resDiv);
                        if(primerValor<0)
                        {
                          printf("No puede factoriar el primer valor por que es negativo \n");
                          flagfact1=1;
                        }
                        else
                        {
                        resFactv1=factorial(primerValor);

                        }
                        if(segundoValor<0)
                        {
                          printf("No puede factoriar el segundo valor por que es negativo \n");
                          flagfact2=1;
                        }
                        else
                        {

                        resFactv2=factorial(segundoValor);
                        }

                        flagControlCal=1;
                        system("pause");
                        }
                        break;
                }
               else
                {
                    printf("ERROR,para calcular debe ingresar 2 VALORES \n");
                    system("pause");
                    break;
                }

        case 4: if(flagControlCal==1)
                {
                    if(flagDivCero==1)
                    {
                        printf("el resultado de la suma es : %d \n",resSuma);
                        printf("el resultado de la resta es : %d \n",resResta);
                        printf("el resultado de la multiplicacion es : %d \n",resMult);
                        printf("No fue posible realizar la division ,el segundo valor es 0 \n");
                        if(flagfact1==0)
                        {
                        printf("El resultado del factorial del primer valor es : %ld \n",resFactv1);
                        }
                        else
                        {
                        printf("Las funcion no pudo realizarse porque el primer valor es negativo\n");
                        }
                        if(flagfact2==0)
                        {
                        printf("El resultado del factorial del segundo valor es : %ld \n",resFactv2);
                        }
                        else
                        {
                        printf("Las funcion no pudo realizarse porque el segundo valor es negativo \n");
                        }

                        system("pause");
                        flagImp1=0;
                        flagImp2=0;
                        flagControl=0;
                        flagControlCal=0;
                        flagDivCero=0;
                        flagfact2=0;
                        flagfact1=0;
                        break;
                    }
                    else
                    {
                        printf("El resultado de la suma es : %d \n",resSuma);
                        printf("El resultado de la resta es : %d \n",resResta);
                        printf("El resultado de la division es : %.2f \n",resDiv);
                        printf("El resultado de la multiplicacion es : %d \n",resMult);
                           if(flagfact1==0)
                        {
                        printf("El resultado del factorial del primer valor es : %ld \n",resFactv1);
                        }
                        else
                        {
                        printf("Las funcion no pudo realizarse porque el primer valor es negativo\n");
                        }
                        if(flagfact2==0)
                        {
                        printf("El resultado del factorial del segundo valor es : %ld \n",resFactv2);
                        }
                        else
                        {
                        printf("Las funcion no pudo realizarse porque el segundo valor es negativo\n");
                        }

                        system("pause");
                        flagImp1=0;
                        flagImp2=0;
                        flagControl=0;
                        flagControlCal=0;
                        flagDivCero=0;
                        flagfact1=0;
                        flagfact2=0;
                        break;

                    }
                }
                else{
                printf("ERROR, COMIENCE CARGANDO VALORES Y REALIZANDO LAS OPERACIONES \n");
                system("pause");
                break;
                }

        case 5:exit(0);
                break;

                default:printf("ERROR, NO INGRESO UNA OPCION VALIDA");
                break;
    }

}while(opcion!=5);





}/* FINAL DE MAIN */

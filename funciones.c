#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/* FUNCIONES */

/* FUNCION PARA PEDIR DATOS */
void GetInt(int* primerValor,char msj[])
{
    int num;
printf("%s",msj);
scanf("%d",&num);
*primerValor=num;

}
/* FUNCION PARA SUMAR DOS VALORES*/
void suma(int primerValor,int segundoValor,int * resSuma)
{
  *resSuma=primerValor+segundoValor;

}

/* FUNCION PARA RESTAR DOS VALORES */
void resta(int primerValor,int segundoValor,int * resResta)
{
  *resResta=primerValor-segundoValor;

}

/* FUNCION PARA MULTIPLICAR DOS VALORES */
void multiplica(int primerValor,int segundoValor,int * resMult)
{
  *resMult=primerValor*segundoValor;

}
/* FUNCION PARA DIVIDIR DOS VALORES */
void divide(int primerValor,int segundoValor,float * resDiv)
{

  *resDiv=(float)primerValor/(float)segundoValor;

}
/* FUNCION PARA FACTORIAR DOS VALORES */
long int factorial(int valor)
{
long int factorial=1;
int i;

if(valor==1 || valor==0)
    {
    factorial=1;
    }
else
 {
    for(i=valor; i>=1;i--)
    {
     factorial = factorial * i;
    }
 }
return factorial;
}


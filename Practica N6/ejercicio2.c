#include <stdio.h>
#include <stdlib.h>

int esPar(int numero);
int suma(int final);
int sumaPar(int final);
int sumaImpar( int final);

int main()
{
   int opcion = 0, numero = 0, total = 0;


   
        printf("\n\nMENU DE SUMATORIA");
        printf("\n1. sumar normal: \n");
        printf("2. sumar pares: \n");
        printf("3. sumar impares \n");
        
        scanf("%d",&opcion);

switch(opcion)
{
case 1:{
			printf("sumar numeros desde el 1 hasta el numero que ingrese a continuacion: \n");
            scanf("%d",&numero);
            total=suma(numero);
            printf("el valor de la suma es : %d\n", total);
		}
break;

case 2:{
			printf("sumar numeros pares desde el 1 hasta el numero que ingrese a continuacion: \n");
            scanf("%i",&numero);
            total=sumaPar(numero);
            printf("el valor de la suma es : %i\n", total);
		}
break;

case 3:{
			printf("sumar numeros impares desde el 1 hasta el numero que ingrese a continuacion: \n");
            scanf("%i",&numero);
            total=sumaImpar(numero);
            printf("el valor de la suma es : %i\n", total);
		}
break;

default:
            
	printf("salida del programa\n");
		
            printf("ingrese solo numeros entre 1 y 3 ...");
break;
   }



   return 0;

}

int suma( int fin)
{
    int sumatoria=0;
    int inicio=1;
    while(inicio!=fin+1)
	{
        sumatoria=inicio+sumatoria;
        inicio++;
    }
	return sumatoria;
}

int sumaPar(int fin)
{
    int sumatoria=0;
    int inicio=1;
    while(inicio!=fin+1)
	{
        if(esPar(inicio)==1)  
			sumatoria=inicio+sumatoria;
        inicio++;
    }
	return sumatoria;
}

int sumaImpar(int fin)
{
    int sumatoria=0;
    int inicio=1;
    while(inicio!=fin+1)
	{
        if(esPar(inicio)==0)  
			sumatoria=inicio+sumatoria;
        inicio++;
    }
	return sumatoria;
}

int esPar(int numero){
    if(numero%2==0)
        return 1;
    else
        return 0;
}



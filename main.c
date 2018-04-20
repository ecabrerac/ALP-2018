#include <stdio.h>

int main(int argc, char *argv[])
{
	int motores[3]={500,700,850};
	int* punteros1[3];
	punteros1[0]=&motores[0];
	punteros1[1]=&motores[1];
	punteros1[2]=&motores[2];
	printf("%d %d %d \n", *punteros1[0],*punteros1[1],*punteros1[2]);
	int* punteros2[3];
	punteros2[0]=punteros1[2];
	punteros2[1]=punteros1[1];
	punteros2[2]=punteros1[0];
	printf("%d %d %d \n", *punteros2[0],*punteros2[1],*punteros2[2]);
	int a= motores[1];
 	if(a==motores[1])
		printf("usted eligio el motor de %d KVA \n", a);
	else
		printf("no se encontró el motor adecuado");
	a= motores[2];
 	if(a==motores[1])
		printf("usted eligio el motor de %d KVA \n", a);
	else
		printf("no se encontro el motor adecuado \n");
	int b=0;
	while(b<3)
	{
		printf("el valor del motor es %d\n", motores[b]);
		b++;
	}
	b=0;
	int aux=0;
	while(b<2)
	{
		if(*punteros1[b] < *punteros1[b+1])
			{aux=*punteros1[b+1];}
		else
			aux=*punteros1[b];
	b++;
	}
	printf("el mayor valor es= %d\n", aux);
	
    return 0;
}


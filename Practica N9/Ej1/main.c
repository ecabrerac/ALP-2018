#include <stdio.h>
#include <stdlib.h>

void copiarArreglos(int*, int*, int);
void printArreglo(int*, int);
int compararArreglos(int*, int*, int);
void inicializarArreglo(int* , int, int);
void ingresarArreglo(int*, int);
void terminarArreglos(int*, int*);

int main(int argc, char *argv[])
{
	int largo, *a, *b, selec, terminar = 0,k;
	printf("Bienvenido, ingrese el largo de los arreglos: ");
	scanf("%d", &largo);
	a = (int*)calloc(largo, sizeof(int));
	b = (int*)calloc(largo, sizeof(int));
	printf("\nArreglos a y b creados.\n");
	while(!terminar)
	{
		printf("Seleccione una opcion:\n1- Ingresar Arreglo.\n2- Inicializar Arreglo,\n");
		printf("3- Desplegar Arreglo en pantalla.\n4- Copiar a en b.\n5- Comparar a y b\n6- Salir.\n");
		scanf("%d", &selec);
		printf("\n\n");
		switch(selec)
		{
			case 1:
				printf("Cual arreglo?\n1- a\n2- b\n");
				scanf("%d", &selec);
				if(selec == 1)
					ingresarArreglo(a,largo);
				else if(selec == 2)
					ingresarArreglo(b,largo);
				break;

			case 2:
				printf("Cual arreglo?\n1- a\n2- b\n");
				scanf("%d", &selec);
				printf("A cual valor? ");
				scanf("%d", &k);
				printf("\n");
				if(selec == 1)
					inicializarArreglo(a,largo,k);
				else if(selec == 2)
					inicializarArreglo(b,largo,k);
				break;

			case 3:
				printf("Cual arreglo?\n1- a\n2- b\n");
				scanf("%d", &selec);
				if(selec == 1)
					printArreglo(a,largo);
				else if(selec == 2)
					printArreglo(b,largo);
				break;

			case 4:
				copiarArreglos(a,b,largo);
				break;

			case 5:
				if(compararArreglos(a,b,largo))
					printf("Los arreglos son iguales\n");
				else
					printf("Los arreglos no son iguales\n");
				break;

			case 6:
				terminarArreglos(a,b);
				terminar = 1;
				break;

		}
		printf("\n\n");
	}
    return 0;
}

void copiarArreglos(int* original, int* copia, int largo)
{
	int i;
	for(i=0; i<largo; i++)
	{
		*(copia+i)=*(original+i);
	}
	printf("\nArreglos copiados.\n");
}

void printArreglo(int* arreglo, int largo)
{
	printf("\n");
	for(int i = 0; i < largo; i++)
		printf("%d ", *(arreglo+i));
	printf("\n");
}

int compararArreglos(int* arreglo1, int* arreglo2, int largo)
{
	int i;
	for(i = 0; i < largo; i++)
	{
		if(*(arreglo1+i)!=*(arreglo2+i))
			return 0;
	}
	return 1;
}

void ingresarArreglo(int* arr, int largo)
{
	int i;
	printf("Ingrese los valores del arreglo:\n");
	for(i=0; i<largo;i++)
	{
		printf("Elemento %d = ", i);
		scanf("%d", arr+i);
	}
}

void inicializarArreglo(int* arr, int largo, int k)
{
	int i;
	for(i=0;i<largo;i++)
		*(arr+i)=k;
}

void terminarArreglos(int* a, int* b)
{
	free(a);
	free(b);
}

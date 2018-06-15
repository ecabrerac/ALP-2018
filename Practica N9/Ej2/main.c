#include <stdlib.h>
#include <stdio.h>

typedef struct contacto{
	char* nombre;
	int edad; // en años
	char* profesion;
	int experiencia; // en Años
}cont;

void imprimir(cont);
void busquedaEdad(cont*);
void busquedaExp(cont*);

int main()
{
	int intentar=0;
	cont trab1;
	trab1.nombre="Juan Gonzalez";
	trab1.edad=35;
	trab1.profesion="Telecomunicaciones";
	trab1.experiencia=3;

	cont trab2;
	trab2.nombre="Maria Alvarez";
	trab2.edad=29;
	trab2.profesion="Electrica";
	trab2.experiencia=1;

	cont trab3;
	trab3.nombre="Ana Garces";
	trab3.edad=35;
	trab3.profesion="Biomedica";
	trab3.experiencia=7;

	cont arr[3] = {trab1,trab2,trab3};

while(!intentar)
{
	int selec;
	printf("\nElija opcion de busqueda\n ");
	printf("\n1.Por Edad\n2.Por Experiencia\n");
	scanf("%d",&selec);
	if(selec==1)
		busquedaEdad(arr);
	else if(selec==2)
		busquedaExp(arr);
	else
	printf("\nOpcion No Valida\nINTENTE NUEVAMENTE\n\n");
}
return 0;
}


void busquedaExp(cont* arr){
	int op,i,aux=0;
	printf("Ingrese Experiencia para buscar un trabajador:  ");
	scanf("%d",&op);

	for(i=0;i<3;i++){
		if(op==arr[i].experiencia){
			imprimir(arr[i]);
		    aux++;}		
}
 	if (aux==0){
		aux=0;
			printf("\nNo se han encontrado resultados\nINTENTE NUEVAMENTE\n\n");
		}
}

void busquedaEdad(cont* arr){
	int op,i,aux=0;
	printf("Ingrese una edad para buscar un trabajador:  ");
	scanf("%d",&op);

	for(i=0;i<3;i++){
		if(op==arr[i].edad){
			imprimir(arr[i]);
		    aux++;}		
}
 	if (aux==0){
		aux=0;
			printf("\nNo se han encontrado resultados\nINTENTE NUEVAMENTE\n\n");
		}
}

void imprimir(cont a)
		{
	printf("\nUsted busca a %s \n", a.nombre);
	printf("tiene %d años \n",a.edad);
	printf("tiene %d Años de Experiencia \n",a.experiencia);
	printf("trabaja como %s \n",a.profesion);
	}




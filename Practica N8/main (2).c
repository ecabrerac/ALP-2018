#include <stdlib.h>
#include <stdio.h>

typedef struct personaje{
	char* nombre;
	int ataque;
	int defensa;
	int vida;
}pj;

void imprimir(pj);

int main()
{
	pj paladin;
	paladin.nombre="Paladin";
	paladin.ataque=1000;
	paladin.defensa=2000;
	paladin.vida=3000;

	pj arquero;
	arquero.nombre="Arquero";
	arquero.ataque=10000;
	arquero.defensa=789;
	arquero.vida=17398;

	pj espadachin;
	espadachin.nombre="Espadachin";
	espadachin.ataque=845632;
	espadachin.defensa=45;
	espadachin.vida=8486532;

	printf("Menu de personajes \n");
	printf("1-Paladin \n2-Arquero\n3-Espadachin\n");
	int a;
	printf("Seleccione su personaje= ");
	scanf("%d",&a);
	if(a==1)
		imprimir(paladin);
	else if(a==2)
		imprimir(arquero);
	else if(a==3)
		imprimir(espadachin);
	else
		printf("El numero ingresado no es valido");

return 0;
}

void imprimir(pj a){
	printf("Usted selecciono el %s \n", a.nombre);
	printf("El %s tinene %d puntos de ataque \n",a.nombre,a.ataque);
	printf("El %s tinene %d puntos de defensa \n",a.nombre,a.defensa);
	printf("El %s tinene %d puntos de vida \n",a.nombre,a.vida);
	}


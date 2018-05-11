#include <stdio.h>

int main()
{
	char palabra[21];
	printf("ingrese palabra= ");
	scanf("%s",palabra);
	int l, tamaño=0;
	for(l=0;l<20;l++)
		{
		if(palabra[l]==0)
			break;
		else
			tamaño++;
		}
	l=0;
	printf("La palabra tiene %d letras \n", tamaño);
	int vocales=0;
	for(l=0;l<tamaño;l++)
	{
		if(palabra[l]=='a')
			vocales++;
		else if(palabra[l]=='e')
			vocales++;
		else if(palabra[l]=='i')
			vocales++;
		else if(palabra[l]=='o')
			vocales++;
		else if(palabra[l]=='u')
			vocales++;
	}
	printf("La palabra tiene %d vocales	 \n", vocales);

	//EJERCICIO 2
	int ataque[3]={2000,1620,563};
	int defensa[3]={60,49,20};
	int k;
	printf("Menu de personajes: \n");
	printf(" 1.-Paladin \n 2.-Arquero \n 3.-Espachin \n");
	printf("Ingrese un numero de personaje: ");
	scanf("%d",&k);
	if(k!=1 && k!=2 && k!=3)
		printf("El numero ingresado no es valido \n");
	else if(k==1){
		printf(" Usted a seleccionado al Paladin \n");
		printf("Puntos de ataque= %d\n", ataque[0]);
		printf("Puntos de defensa= %d\n", defensa[0]);}
	else if(k==2){
		printf(" Usted a seleccionado al Arquero \n");
		printf("Puntos de ataque= %d\n", ataque[1]);
		printf("Puntos de defensa= %d\n", defensa[1]);}
	else if(k==3){
		printf(" Usted a seleccionado al Espadachin \n");
		printf("Puntos de ataque= %d\n", ataque[2]);
		printf("Puntos de defensa= %d\n", defensa[2]);}




    return 0;
}


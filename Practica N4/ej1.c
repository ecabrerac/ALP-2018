#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numeros[7], ordenados[7], max_local=0, indice_usado=100; /*Nuestras variables
	-numeros[] ser� el arreglo en el que guardaremos nuestra secuencia de n�meros aleatorios.
	-ordenados[] ser� el arreglo con los mismos n�meros pero ordenados.
	-max_local es una variable auxiliar que usaremos para buscar el mayor n�mero en el arreglo.
	-indice_usado */

	srand(time(NULL)); //generamos un nueva semilla para rand() usando el tiempo.
	int i,k; //Nuestros contadores para los ciclos for.


	for(i=0; i<=7; i++){//generamos la secuencia aleatoria y la guardamos en "numeros" con un for.
		numeros[i]=rand()%101;
	}

	printf("Numeros generados: ");

	for(i=0; i<=7; i++){//Desplegamos los n�meros en pantalla mediante un for.
		printf("%d ", numeros[i]);
	}

	printf("\n");
	printf("Secuencia ordenada: ");


/*Para ordenar los n�meros usaremos un ciclo for "anidado" en otro. El for anidado buscar� el n�mero
mayor en "numeros" y guardara ese valor y su posici�n en el arreglo en las variables max_local y indice_usado respectivamente.*/

	for(i=0; i<=7; i++){//for que ir� llenando "ordenados"

		for(k=0; k<=7; k++){//for de busqueda.
			if(max_local<=numeros[k]){//Si el mayor n�mero encontrado hasta ahora es menor al siguiente elemento...
				max_local=numeros[k];//este elemento pasar� a ser el n�mero mayor.
				indice_usado = k;//guardamos el indice de este n�mero.
			}
		}
		ordenados[i]=max_local;//Se guarda el mayor n�mero encontrado en el for anidado.
		numeros[indice_usado]=0;//Se hace 0 el valor encontrado en "numeros", esto evita que volvamos a tomar este valor y tambien nos ayuda en el caso que hayan n�meros repetidos.
		max_local = 0;//se resetea la variable max_local para poder encontrar el siguiente elemento en el for anidado.
	}


	for(i=0; i<=7; i++){//Finalmente desplegamos el arreglo ordenado usando un for.
		printf("%d ", ordenados[i]);
	}
	printf("\n");
    return 0;
}

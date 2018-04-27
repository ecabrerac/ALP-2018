#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numeros[7], ordenados[7], max_local=0, indice_usado=100; /*Nuestras variables
	-numeros[] será el arreglo en el que guardaremos nuestra secuencia de números aleatorios.
	-ordenados[] será el arreglo con los mismos números pero ordenados.
	-max_local es una variable auxiliar que usaremos para buscar el mayor número en el arreglo.
	-indice_usado */

	srand(time(NULL)); //generamos un nueva semilla para rand() usando el tiempo.
	int i,k; //Nuestros contadores para los ciclos for.


	for(i=0; i<=7; i++){//generamos la secuencia aleatoria y la guardamos en "numeros" con un for.
		numeros[i]=rand()%101;
	}

	printf("Numeros generados: ");

	for(i=0; i<=7; i++){//Desplegamos los números en pantalla mediante un for.
		printf("%d ", numeros[i]);
	}

	printf("\n");
	printf("Secuencia ordenada: ");


/*Para ordenar los números usaremos un ciclo for "anidado" en otro. El for anidado buscará el número
mayor en "numeros" y guardara ese valor y su posición en el arreglo en las variables max_local y indice_usado respectivamente.*/

	for(i=0; i<=7; i++){//for que irá llenando "ordenados"

		for(k=0; k<=7; k++){//for de busqueda.
			if(max_local<=numeros[k]){//Si el mayor número encontrado hasta ahora es menor al siguiente elemento...
				max_local=numeros[k];//este elemento pasará a ser el número mayor.
				indice_usado = k;//guardamos el indice de este número.
			}
		}
		ordenados[i]=max_local;//Se guarda el mayor número encontrado en el for anidado.
		numeros[indice_usado]=0;//Se hace 0 el valor encontrado en "numeros", esto evita que volvamos a tomar este valor y tambien nos ayuda en el caso que hayan números repetidos.
		max_local = 0;//se resetea la variable max_local para poder encontrar el siguiente elemento en el for anidado.
	}


	for(i=0; i<=7; i++){//Finalmente desplegamos el arreglo ordenado usando un for.
		printf("%d ", ordenados[i]);
	}
	printf("\n");
    return 0;
}

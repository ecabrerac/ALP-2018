#include <stdio.h>

int main(int argc, char *argv[])
{
	int motores[7]={500,700,850,5200,694,684,999};
	int  max=0, k=0;
	printf(" El arreglo es:");
	for(k=0; k<7; k++){//for de busqueda.
			if(max<=motores[k]){//Si el mayor n�mero encontrado hasta ahora es menor al siguiente elemento...
				max=motores[k];//este elemento pasar� a ser el n�mero mayor.
				//motores[k]=0;//guardamos el indice de este n�mero.
		}
		printf(" %d ",motores[k]);
		
	}
		printf("\n \n EL VALOR MAXIMO ES %d \n\n",max);
    return 0;
}

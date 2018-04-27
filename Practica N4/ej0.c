#include <stdio.h>

int main(int argc, char *argv[])
{
	int motores[7]={500,700,850,5200,694,684,999};
	int  max=0, k=0;
	printf(" El arreglo es:");
	for(k=0; k<7; k++){//for de busqueda.
			if(max<=motores[k]){//Si el mayor número encontrado hasta ahora es menor al siguiente elemento...
				max=motores[k];//este elemento pasará a ser el número mayor.
				//motores[k]=0;//guardamos el indice de este número.
		}
		printf(" %d ",motores[k]);
		
	}
		printf("\n \n EL VALOR MAXIMO ES %d \n\n",max);
    return 0;
}

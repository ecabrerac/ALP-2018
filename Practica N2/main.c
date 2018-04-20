#include <stdio.h>

int main()
{
 printf("EJERCICIO 1");
	// Parte a)
    int array1[3]={3,5,9};//Se declara el array1
    int array2[3]={7,8,1};//Se declara el array2
    int resultado[3];//Se declara el array de resultados

    resultado[2]=array1[0]+array2[0];// se realizan las operaciones
    resultado[0]=array1[0]*array2[1];
    resultado[1]=array2[0]-array1[1];

    printf("\nPARTE a)\nSuma: %i\nMultiplicacion: %i\nResta: %i\n",resultado[2],resultado[0],resultado[1]);//Se imprimen los resultados

    // Parte b) forma 1
    int *p1,*p2,*p3;//Se declaran los punteros

    p1=array1;
    p2=array2;
    p3=resultado;

    *(p3+2)=*p1+*p2;//Se realizan las operaciones
    *(p3)=*p1* *(p2+1);
    *(p3+1)=*p2-*(p1+1);

    printf("\nPARTE b)FORMA 1 \nSuma: %i\nMultiplicacion: %i\nResta: %i\n",*(p3+2),*(p3+0),*(p3+1));//Se imprimen los resultados

    // Parte b forma 2

    *(resultado+2)=*array1+*array2;//Se realizan las operaciones
    *(resultado)=*array1 * *(array2+1);
    *(resultado+1)=*array2-*(array1+1);

    printf("\nPARTE b)FORMA 2 \nSuma: %i\nMultiplicacion: %i\nResta: %i\n",*(resultado+2),*(resultado+0),*(resultado+1));//Se imprimen los resultad	

 printf("\nEJERCICIO 2");

double potencia[6];// Creamos arreglo para guardar valores

  // asignamos valores a de menor a mayor// 
    potencia[5]=99.80;
	potencia[4]=90.0;
	potencia[3]=74.20;
	potencia[2]=60.33;
	potencia[1]=55.74;
	potencia[0]=49.80;

	double* point = potencia +3; // apuntamos un puntero al cuarto elemento de arreglo

// imprimimos del mayor al menor valor usando el puntero

    printf("\n6to valor: %.2lf\n5to valor: %.2lf\n4to valor: %.2lf\n3er valor: %.2lf\n2do valor: %.2lf\n1er valor: %.2lf\n",*(point+2),*(point+1),*(point),*(point-1),*(point-2),*(point-3));
// Imprimimos el promedio
	double promedio = (*(potencia)+*(potencia+1)+*(potencia+2)+*(potencia+3)+*(potencia+4)+*(potencia+5))/6;
	printf("\nPromedio: %lf\n",promedio);
    return 0;
}

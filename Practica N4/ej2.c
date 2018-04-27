#include <stdio.h>
#include <stdlib.h>
//Práctica 4, ejercicio 1.
int main()
{
    int i=0,k=0, num;
	int primo = 1; 
    /* // EN CASO QUE SEPAN UNA SCANF //
	printf("Ingrese un Numero ");
	scanf("%d",&num);
    */
	num = 15; // Valor para modificar
    printf("El numero ingresado es %d, y tenemos que: \n\n",num);

    for(i=1;i<=num;i++)
	{
  		if(i%2==1)//Si num es impar 
		{

		for(k=2;k<i;k++) // Verificamos si es numero primo
        {
            if(i%k==0) //se verifica que la division por un numero sea 0
                {
                    printf(" El numero %i es IMPAR\n",i);
                    primo = 0; //se desactiva nuestra bandera para no pasar por el if más adelante
                    break;
                }
        }
        if(primo)//si la bandera sigue valiendo 1 el numero es primo
		printf(" El numero %i es IMPAR Y PRIMO \n",i);
			
		
		primo=1; // reiniciamos el valor
		
	  	}
		else if(i%2==0)//Si N es par
		{
		if (i==2)//Se verifica el caso especial de 2
       printf(" El numero 2 es PAR Y PRIMO \n");
		
			else
			printf(" EL numero %d es PAR\n" ,i);
        }
	       	

}
	

    return 0;
}

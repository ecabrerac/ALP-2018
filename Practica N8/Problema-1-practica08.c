#include <stdlib.h>
#include <stdio.h>

typedef struct distancia{
	int metros;
	int centimetros;
}dist;

void imprimir(dist);

dist suma (dist, dist );

int main(int argc, char *argv[])
{
	dist n1;
	printf("ingrese centimetros= ");
	scanf("%d",&(n1.centimetros));
	printf("ingrese metros= ");
	scanf("%d",&(n1.metros));

	dist n2;
	printf("ingrese centimetros= ");
	scanf("%d",&(n2.centimetros));
	printf("ingrese metros= ");
	scanf("%d",&(n2.metros));
	
	imprimir(suma(n1, n2));
	


    return 0;
}
void imprimir(dist x)
{
	printf("centimetros= %d\n", x.centimetros);
	printf("metros= %d\n", x.metros);
}
dist suma (dist x, dist y)
{
	dist s;
	s.centimetros= x.centimetros + y.centimetros;
	s.metros= x.metros + y.metros;

	return s;
}

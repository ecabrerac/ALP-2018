#include <stdio.h>
#include <stdlib.h>

float max(float*,int);
float min(float*,int);
float prom(float*,int);


int main()
{
    int i,largo;
    printf("Ingrese numero de notas:\n");
    scanf("%i",&largo);
    float notas[largo];
    printf("Ingrese sus %i notas:\n",largo);
    for(i=0;i<=(largo-1);i++){
        scanf("%f",notas+i);
    }
    largo=i;

    printf("Su nota maxima es %f\n",max(notas,largo));
    printf("Su nota minima es %f\n",min(notas,largo));
    printf("Su promedio es %f, ",prom(notas,largo));
    if(prom(notas,largo)>=4.0)
        printf("ha aprobado.");

    else
        printf("ha reprobado.");



    return 0;
}

float max(float* argumento,int largo)
{
    int i,j,cont=0;
    for(i=0;i<=(largo-1);i++){
        for(j=0;j<=(largo-1);j++){
            if(*(argumento+i)>=*(argumento+j)){
            cont++;
            }
            if(cont==largo){
                return *(argumento+i);
            }
        }
    cont=0;
    }
}

float min(float* argumento,int largo)
{
    int i,j,cont=0;
    for(i=0;i<=(largo-1);i++){
        for(j=0;j<=(largo-1);j++){
            if(*(argumento+i)<=*(argumento+j)){
            cont++;
            }
            if(cont==largo){
                return *(argumento+i);
            }
        }
    cont=0;
    }
}

float prom(float* argumento,int largo)
{
    int i;
    float suma=0,promd=0;
    for(i=0;i<=(largo-1);i++){
        suma=suma + *(argumento+i);
        //suma+=*(argumento+i)/largo;
    }
    promd=suma/largo;
    //suma=suma;
    return promd;
}




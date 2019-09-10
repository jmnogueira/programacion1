#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main()
{
    int legajos[TAM];
    int edad[TAM];
    int nota1[TAM];
    int nota2[TAM];
    int nota3[TAM];
    char sexo[TAM];
    float promedio[TAM];




    for(int i=0; i<3; i++)
        {
            printf("ingrese legajos:\n");
            scanf("%d",&legajos[i]);
            printf("ingrese edad:\n");
            scanf("%d",&edad[i]);
            printf("ingrese sexo:\n");
            scanf("%c",&sexo[i]);
            printf("ingrese nota1\n");
            scanf("%d", &nota1[i]);
            printf("ingrese nota2\n");
            scanf("%d", &nota2[i]);
            printf("ingrese nota3\n");
            scanf("%d", &nota3[i]);
            promedio[i]=(nota1[i]+nota2[i]+nota3[i])/3;

        }
        for(int i=0; i<3; i++)
        {
            "%d\t %d\t %c\t %d\t %d\t &d %f";
                        legajos[i];
                        edad[i];
                        sexo[i];
                        nota1[i];
                        nota2[i];
                        nota3[i];
                        promedio[i];
            promedio[i]=(float)(nota1[i]+nota2[i]+nota3[i])/3;


    return 0;
}

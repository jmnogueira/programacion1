#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[5];
    int suma=0;


    for(int i=0; i<5; i++)
        {
            printf("ingrese numeros\n");
            scanf("%d", &numero[i]);
        }
    for(int i=0; i<5; i++)
        {
            printf("%d\n", numero[i]);
        }
    for(int i=0; i<5; i++)
        {
            suma=suma+numero[i];

        }
        printf("%d", suma);
        return 0;
}

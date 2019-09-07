#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[5];
    int flag=0;
    int maximo;



    for(int i=0; i<5; i++)
        {
            printf("ingrese numeros");
            scanf("%d" ,&numero[i]);
        }
    for(int i=0; i<5; i++)
        {
            if(numero[5]>maximo || flag==0 )
                {
                    maximo=numero[i];
                    flag=1;
                }
        }
        printf("maximo es:", maximo);
return 0;
}

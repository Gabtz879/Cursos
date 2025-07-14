/*
    arreglos
*/
#include <stdio.h>
int main()
{
    int size;
    printf("Ingresar el tamaño del arreglo: ");
    scanf("%i",&size);
    int arreglo[size];
    for (int i = 0; i < size; i++)
    {
        arreglo[i]=(i+1);
    }
    printf("\nLos valores del arreglo son: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%i\n",arreglo[i]);
    }


    int sizeM[2];
    printf("Ingresa el tamaño en x,y de la matriz");
    for (int i = 0; i < 2; i++)
    {
        scanf("%i",&sizeM[i]);
        if (i < 1){
            printf(", ");
        }
    }
    int multi[sizeM[0]][sizeM[1]];
    for (int i = 0; i < sizeM[0]; i++)
    {
        for (int j = 0; j < sizeM[1]; j++)
        {
            printf("Ingresa el valor de [%i][%i] de la matriz: ",i,j);
            scanf("%i",&multi[i][j]);
        }
        
    }
    printf("\nMatriz resultante: \n");
    for (int i = 0; i < sizeM[0]; i++)
    {
        for (int j = 0; j < sizeM[1]; j++)
        {
            printf("%4i ",multi[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
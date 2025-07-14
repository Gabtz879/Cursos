/*
    Punteros 
        llamada de funciones por referencia
*/
#include <stdio.h>
void cubo(int *n);
int main()
{
    int numero = 2;
    cubo(&numero);
    printf("%i",numero);
    return 0;
}
void cubo(int *n){
    *n=((*n)*(*n)*(*n));
}
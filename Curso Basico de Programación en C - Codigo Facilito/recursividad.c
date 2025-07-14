/*
    Funciones recursivas
*/
#include <stdio.h>
long factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n-1);
}
int main()
{
    int numero;
    printf("\nIngresa el valor para sacar su factorial: ");
    scanf("%i",&numero);
    printf("\nEl factorial de %i es: %li",numero,factorial(numero));
    return 0;
}

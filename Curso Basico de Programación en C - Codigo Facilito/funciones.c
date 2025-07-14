/*
    Funciones
*/
#include <stdio.h>
int suma();
void saludo();


int main()
{
    saludo();
    printf("\n%i",suma());
    return 0;
}
void saludo(){
    printf("Que onda Gabriel");
    return;
}
int suma(){
    int num=29;
    int num2=3;
    int suma =num + num2;
    return suma;
}
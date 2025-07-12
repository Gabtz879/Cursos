#include <stdio.h>

/*Operadores de igualdad, operadores de relacion*/
int main(){
    int edad;
    printf("Ingresa la edad: "); scanf("%d",&edad);
    if (edad<18)
    {
        printf("\nEres menor de edad");
    }
    else{
        printf("\nEres mayor de edad");
    }
    return 0;
}
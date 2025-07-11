#include <stdio.h>
/*Ejemplo resta con entrada salida basica sin ciclos, arreglos o punteros*/
/*Inicio funcion main*/
int main()
{
    int num1;
    int num2;
    int resultado;
    printf("Ingrese dos valores\n");
    printf("\nValor 1: ");
    scanf("%d",&num1);
    printf("\nValor 2: ");
    scanf("%d",&num2);
    resultado= num1 - num2;
    printf("El resultado de la resta %d + %d es: %d",num1,num2,resultado);
    return 0;
}
/*Fin funcion main*/
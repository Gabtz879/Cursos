#include <stdio.h>

/*Ejemplo operacion aritmetica de con varios operadores*/
int main(){

    float num1, num2,resultado;
    printf("Ingresa dos valores\n");
    printf("\nPrimer Valor: ");
    scanf("%f",&num1);
    printf("\nSegundo Valor: ");
    scanf("%f",&num2);
    resultado = ((num2/num1)*num2) + (num2 +(num1*num2));
    printf("\n\nEl resultado es: %f",resultado);

}

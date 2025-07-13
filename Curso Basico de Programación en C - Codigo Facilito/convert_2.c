/*
    Palabras reservadas y conversion de tipos de datos (casting)
*/

#include <stdio.h>

int main(){
    int a = 80;
    float f = 45.3;
    float resultado = (float)a + f;
    printf("flotante %.2f\n",resultado);
    return 0;
}
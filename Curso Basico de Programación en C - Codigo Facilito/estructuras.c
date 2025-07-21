/*
    Estructuras en C
*/
#include <stdio.h>
struct perro //estructura
{
    char nombre[20];
    int edadMeses;
    float peso;
}perro1={"Daniel",3, 18.9};

int main()
{
    char *unidad = (perro1.edadMeses==1) ? "mes":"meses"; // ternario
    printf("El perro %s tiene una edad de %i %s y un peso de %.2f",perro1.nombre,perro1.edadMeses,unidad,perro1.peso);    
    return 0;
}
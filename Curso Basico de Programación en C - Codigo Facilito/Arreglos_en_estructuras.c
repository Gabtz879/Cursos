/*
    Arreglos en estructuras
*/
#include <stdio.h>
struct perro
{
    char nombre[30];
    int edadMeses;
    float pesoKilos;
}perros[3];

int main(){
    for(int i = 0; i < 3; i++){
        printf("\n\nIngresa el nombre del perro %d: ",(i+1));
        scanf("%s",perros[i].nombre);
        printf("\nIngresa la edad del perro %d en meses: ",(i+1));
        scanf("%d",&perros[i].edadMeses);
        printf("\nIngresa el peso del perro %d en kg: ",(i+1));
        scanf("%f",&perros[i].pesoKilos);
    }
    for (int i = 0; i < 3; i++)
    {
        char *unidad = (perros[i].edadMeses==1) ? "mes":"meses";
        printf("\n\n%d.- El perro se llama %s, tiene %d %s de edad y pesa %.2f Kg \n",(i+1),perros[i].nombre,perros[i].edadMeses,unidad,perros[i].pesoKilos);
    }
    return 0;
}
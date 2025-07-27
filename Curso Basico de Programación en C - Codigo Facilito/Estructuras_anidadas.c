/*
    Estructuras anidadas
*/

#include <stdio.h>
#include <stdlib.h>
#define n 2
struct owner{
    char nombre[30];
    char direccion[30]; //Solo se pueden ingresar espacion con fgets, no es valido espacios en scanf
};
struct dog
{
    char nombre[30];
    int edadMeses;
    struct owner ownerDog;
};

int main(){
    struct dog *perros;
    perros = malloc(n * sizeof(struct dog));
    for (int i = 0; i < n; i++)
    {
        printf("\n%d.- Ingresa nombre del perro: ",i+1);
        scanf("%s",perros[i].nombre);
        printf("\n%d.- Ingresa la edad en meses perro: ",i+1);
        scanf("%d",&perros[i].edadMeses);
        printf("\n%d.- Ingresa nombre del dueño: ",i+1);
        scanf("%s",perros[i].ownerDog.nombre);
        printf("\n%d.- Ingresa la direccion del dueño: ",i+1);
        scanf("%s",perros[i].ownerDog.direccion);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%d.- Nombre del perro: %s",i+1,perros[i].nombre);
        printf("\n%d.- Edad en meses de perro: %d",i+1,perros[i].edadMeses);
        printf("\n%d.- Nombre del dueño: %s",i+1,perros[i].ownerDog.nombre);
        printf("\n%d.- Ingresa la direccion del dueño: %s",i+1,perros[i].ownerDog.direccion);
    }
    free(perros);
    return 0;
}
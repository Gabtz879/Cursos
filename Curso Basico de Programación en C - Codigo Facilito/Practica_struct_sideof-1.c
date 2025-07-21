#include <stdio.h>
#include <stdlib.h>
struct Perro
{
    char nombre[20];
    int edadMeses;
    float pesoKg;
};
void aumentoPeso(struct Perro *p,int n){
    for(int i = 0; i < n ; i++){
        p[i].pesoKg += 2.5;
    }
}
int main()
{
    struct Perro *perros;
    int n;
    
    printf("\n\n Ingresa el numero de perros que quieres ingresar: ");
    scanf("%d",&n);
    perros=malloc(n * sizeof(struct Perro));
    for (int i = 0; i < n; i++)
    {
        printf("\n\nIngresa el nombre del perro %i: ",(i+1));
        scanf("%s",&perros[i].nombre);
        printf("\nIngresa su edad en meses: ");
        scanf("%d",&perros[i].edadMeses);
        printf("\nIngresa su peso en Kg : ");
        scanf("%f",&perros[i].pesoKg);
    }
    aumentoPeso(perros,n);
    for (int i = 0; i < n; i++)
    {
        char *unidad = (perros[i].edadMeses==1) ? "mes":"meses";
        printf("\n\nNombre del perro %i: %s",(i+1),perros[i].nombre);
        printf("\nLa edad del perro es de %i %s ",perros[i].edadMeses,unidad);
        printf("\nSu peso es de %.2fKg",perros[i].pesoKg);
    }
    return 0;
}

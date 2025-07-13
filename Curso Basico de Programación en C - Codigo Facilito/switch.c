#include <stdio.h>

int main(){
    int opciones;
    printf("Ingrese la opcion: ");
    scanf("%i",&opciones);
    switch(opciones)
    {
        case 1:
        printf("Elegiste la opcion uno");
        break;
        case 2:
        printf("Elegiste la opcion dos");
        break;
        case 3:
        printf("Elegiste la opcion tres");
        break;
        case 4:
        printf("Elegiste la opcion cuatro");
        break;
        case 5:
        printf("Elegiste la opcion cinco");
        break;
        default:
        printf("No es una opcion disponible");
        break;
    }
    return 0;
}
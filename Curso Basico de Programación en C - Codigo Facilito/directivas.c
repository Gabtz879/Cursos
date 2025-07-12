#include <stdio.h>
//#include "nombre del archivo"
#define PI 3.14159
#define cubo(a) ((a)*(a)*(a))

/*Directivas del preprocesador*/
int main(){

    //int suma;
    //suma= PI + 3;
    int a=3;
    printf("\nEl cubo de %d es: %i",a,cubo(a));
    return 0;
}
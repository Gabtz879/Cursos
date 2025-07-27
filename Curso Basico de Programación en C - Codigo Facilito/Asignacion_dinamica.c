#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 2
int size;
struct dog
{
    char name[20];//buffer memoria temporal
    char *p_name;
};
int main(){
    struct dog *perros;
    perros = malloc(n * sizeof(struct dog));
    for(int i = 0; i < n; i++){
        printf("\n%d.- Ingresa nombre del perro: ",i+1);
        scanf("%s",perros[i].name);
        size = strlen(perros[i].name);
        printf("%i\n",size);
        perros[i].p_name=malloc((size+1)*sizeof(char));
        if(NULL==perros[i].p_name){
            printf("Error al asignar Memoria");
        }else{
            strcpy(perros[i].p_name,perros[i].name);
        }
    }
    for(int i = 0; i < n; i++){
        printf("\n%d.- Nombre del perro: %s",i+1,perros[i].p_name);
        free(perros[i].p_name);
    }
    free(perros);
    return 0;
}
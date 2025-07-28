#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    char *nombre;
    struct nodo *sig;
}Libro;


Libro *agregarLibro(Libro *Lista, char *nombre){
    Libro *nuevoLibro;
    nuevoLibro= (Libro*)malloc(sizeof(Libro));
    nuevoLibro->nombre =nombre;
    nuevoLibro->sig=NULL;
    if(Lista == NULL){
        Lista=nuevoLibro;
    }else{
        Libro *temp;
        temp=Lista;
        while(temp->sig!=NULL){
            temp=temp->sig;
        }
        temp->sig=nuevoLibro;
    }
    return Lista;
}
int main(){
    Libro *Lista = NULL;
    Lista = agregarLibro(Lista,"HTML5 avanzado");
    Lista = agregarLibro(Lista,"CSS avanzado");
    while(Lista!=NULL){
        printf("%s\n",Lista->nombre);
        printf("%p\n",Lista->sig);
        Lista=Lista->sig;
    }
    return 0;
}
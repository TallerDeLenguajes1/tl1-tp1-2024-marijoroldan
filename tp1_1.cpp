#include <stdio.h>
#include <stdlib.h>

int main () {
    int *p_punt, numero=10;
    p_punt=&numero;
    printf("Hola mundo\n");
    printf("contenido de la variable a la que apunta el puntero: %d\n",*p_punt);
    printf("dirección de memoria almacenada por el puntero: %p\n",162,p_punt);
    printf("dirección de memoria de la variable: %p\n",162,&numero);
    printf("dirección de memoria del puntero: %p\n",162,&p_punt);
    printf("tamaño de memoria usado por la variable numero: %d Bytes",164,sizeof(numero));

    return 0;
}

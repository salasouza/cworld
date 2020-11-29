#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *p = (int *) malloc(sizeof(int)); //memory allocation

    if ( p == NULL) {
        
        printf("Malloc memória cheia");
    }

    *p = 1000;

    printf("%i", *p);

    return 0;
}
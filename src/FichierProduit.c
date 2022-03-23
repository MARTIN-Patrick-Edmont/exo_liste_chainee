#include <stdio.h>
#include <stdlib.h>
#include "../include/FichierProduit.h"

FILE* test(){
    FILE* f = NULL;
    f = fopen(FICHIER,"rw");
    if(f == NULL){
        printf("oopsie woopsie, UwU, we did a wittle fucky wucky\n");
    }
    else{
        printf("success\n");
    }
    rewind(f);
    return NULL;
}

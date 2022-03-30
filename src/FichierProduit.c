#include <stdio.h>
#include <stdlib.h>
#include "../include/FichierProduit.h"
#include "../include/Produit.h"

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
    return f;
}

unsigned char lireUnProduit(FILE* fichier,Produit* produit){
    unsigned int code ;
    float prix;
    char nom[100];
    fscanf(fichier,"%d %f %[ 'a-zA-Z]",&code, &prix, nom);
    printf("%d %f %s",code, prix, nom);
    return "a";
}

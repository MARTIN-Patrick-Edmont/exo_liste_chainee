#include "../include/Produit.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Produit creerProduit(unsigned int code, float prix, char* nom){
    Produit p ;
    p.code = code ;
    p.prix = prix ;
    p.nom = calloc(strlen(nom+1),sizeof(char)) ;
    p.nom = nom ;
    return p ;
}

Produit saisirProduit(){
    Produit p ;
    char nom[100];
    printf("code\n");
    scanf("%d",&p.code);
    printf("prix\n");
    scanf("%f",&p.prix);
    printf("nom \n");
    fflush(stdin);
    scanf("%s",&p.nom);
    return p;
}

/*void afficherProduit(Produit* p){
    p.code = code;
    p.nom = "Amogus";
    p.prix = 5.36;
    printf("%d ",p.code);
    printf("%f ",p.prix);
    printf("%s ",p.nom);
}*/



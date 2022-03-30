#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/Produit.h"
#include "../include/FichierProduit.h"
#include "../include/ListeChainee.h"
int main()
{
    unsigned int code;
    Produit p;
    FILE* f=NULL;
    f=test();
    //scanf("%d",&code);
    //afficherProduit(code);
    if(f!=NULL){lireUnProduit(f,&p);}
    return 0;
}

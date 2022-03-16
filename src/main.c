#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/Produit.h"

int main()
{
    Produit p;
    p = saisirProduit();
    printf("%d ",p.code);
    printf("%.2f ",p.prix);
    printf("%s\n", p.nom);

    return 0;
}

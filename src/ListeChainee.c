#include <stdio.h>
#include <stdlib.h>
#include "ListeChainee.h"

Element* dernierListe(Element* liste){
    Element* res;
    if (liste==NULL){
        printf("fuck \n");
        res=malloc(sizeof(Element));// je ne suis pas certains que ce soit une bonne idée, mais le code est supposé créer un Element si la liste est vide
    }
    while(liste!=NULL){ //boucle jusqu'à NULL
        res=liste;//l'ordre est important pour ne pas se retrouver avec un NULL dans res
        liste=liste->next;
    }
    return res ;
}

Element* creerElement(Produit p);{
    Element* elem=malloc(sizeof(Element)) ;
    elem->p = p;
    return elem;
}

Element* appendElement(Produit p, Element* liste){
    Element* buffer;
    buffer = dernierListe(liste);
    creerElement()
}

#ifndef LISTECHAINEE_H_INCLUDED
#define LISTECHAINEE_H_INCLUDED
#include "Produit.h"

typedef struct {
    Produit p ;
    struct Element* next ;
} Element ;

Element* dernierListe(Element* liste);
Element* creerElement(Produit p); // p : produit que contiendra l'élément
Element* appendElement(Produit p, Element* liste); // p : produit à ajouter ; liste : liste à appender
#endif //LISTECHAINEE_H_INCLUDED

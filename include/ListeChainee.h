#ifndef LISTECHAINEE_H_INCLUDED
#define LISTECHAINEE_H_INCLUDED
#include "Produit.h"

typedef struct {
    Produit p ;
    struct Element* next ;
} Element ;

Element* dernierListe(Element* liste);
Element* creerElement(Produit p); // p : produit que contiendra l'�l�ment
Element* appendElement(Produit p, Element* liste); // p : produit � ajouter ; liste : liste � appender
#endif //LISTECHAINEE_H_INCLUDED

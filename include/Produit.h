#ifndef PRODUIT_H_INCLUDED
#define PRODUIT_H_INCLUDED

typedef struct {
unsigned int code;
float prix ;
char* nom ;
} Produit ;

Produit creerProduit(unsigned int code, float prix, char* nom);
Produit saisirProduit();
void afficherProduit(Produit p);
#endif // PRODUIT_H_INCLUDED

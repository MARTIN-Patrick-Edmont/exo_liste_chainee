typedef struct {
unsigned int code;
float prix ;
char* nom ;
} Produit ;

Produit creerProduit(unsigned int code, float prix, char* nom);
Produit saisirProduit();
void afficherProduit(Produit* p);

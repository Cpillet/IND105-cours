// Mon fichier donc double guillemet
#include "fonctions.h"

#include <stdio.h>
// Mon fichier source fonctions.c définit les fonctions déclarés dans fonctions.h

void afficher_ligne_tiret() {
    printf("-------------------------------------------------\n");
}
void afficher_ligne_egal() {
    printf("===============================================\n");
}
void affichage_factoriel(int n, int resultat) {
    printf("Affichage Factoriel : %d!=%d\n", n, resultat);
}

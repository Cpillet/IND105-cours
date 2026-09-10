//Inclusion de des fichiers standard
#include <stdio.h>
// Inclusion de mes fichiers d'en tête
#include "fonctions.h"
#include "fonctions_mathematique.h"
int main(int argc, char** argv) {
    // Demande à l'utilisateur une valeur dans le terminale
    int n;
    // Lire un entier et le mettre dans n
    printf("Veuillez saisir un entier n : \n");
    scanf("%d", &n); // SCANF demande L'ADRESSE --> & is needed
    printf("L'entier lu est %d\n", n);
    afficher_ligne_tiret();
    int resultat = factoriel_for(n);
    affichage_factoriel(n, resultat);
    afficher_ligne_tiret();
    int resultat_while = factoriel_while(n);
    affichage_factoriel(n, resultat_while);
    afficher_ligne_tiret();
    int resultat_recursive = factoriel_recursive(n);
    affichage_factoriel(n, resultat_recursive);
    afficher_ligne_egal();
    printf("Donne moi une valeur de u_0 (suite de syracuse)\n");
    int u_0;
    scanf("%d", &u_0);
    suite_syracuse(u_0);
    return 0;
}

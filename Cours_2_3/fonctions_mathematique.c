//1ere étape dans fichier source : #include
#include <stdio.h>
#include "fonctions_mathematique.h"

// Factoriel est défini comme 0!=1 et n!=n*(n-1)*...*2*1
// Ma fonction retourne un entier (n!)
int factoriel_for(int n) {
    int resultat = 1;
    // for ...
    for (int i = 1 ; i<=n ; i++) {
        resultat = resultat*i;
    }
    return resultat;
}
int factoriel_while(int n) {
    int resultat = 1;
    int index = 1;
    while (index<=n) {
        resultat = resultat*index;
        index++;
        // index=index+1 / index++
    }
    return resultat;
}
// Une fonction récursive a au moins un cas de base ET une partie qui s'auto appelle
int factoriel_recursive(int n) {
    if (n==0) {
        return 1;
    }
    else {
        return factoriel_recursive(n-1)*n;
    }
}

// u_(n+1) = u_n/2 si u_n est pair ou 3*u_n+1 si u_n est impair
// on va afficher les u_n tant que u_n est différent de 1
// Suite qui converge TOUT lE TEMPS vers 1
int suite_syracuse(int u_0) {
    int u_n = u_0;
    while (u_n!=1) {
        // Si u_n est pair...
        if (u_n%2==0) { // %2 donne le reste de la division de u_n par 2
            u_n = u_n/2;
        }
        else {
            u_n = 3*u_n+1;
        }
        printf("%d\n",u_n);
    }
    return 0;
}
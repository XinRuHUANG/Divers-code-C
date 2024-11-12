#include <stdio.h>

void afficherBinaireNonRecursive(int n) {
    if (n == 0) {
        // Cas où n est 0, afficher directement "0"
        printf("0");
        return;
    }
    
    // Tableau pour stocker les bits
    int bits[32]; // Assumer qu'on ne travaille qu'avec des entiers de 32 bits
    int index = 0;
    
    // Remplir le tableau avec les bits (en partant du bit de poids faible)
    while (n > 0) {
        bits[index] = n % 2;  // Stocke le bit de poids faible
        n = n / 2;             // Divise n par 2
        index++;
    }
    
    // Afficher les bits dans l'ordre inverse (car on a rempli le tableau de bas en haut)
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
}

void afficherBinaireRecursive(int n) {
    if (n > 1) {
        // Appel récursif pour diviser le nombre par 2
        afficherBinaire(n / 2);
    }
    // Affiche le bit de poids faible (le reste de la division par 2)
    printf("%d", n % 2);
}

int main() {
    int n;
    
    // Demande à l'utilisateur d'entrer un nombre
    printf("Entrez un entier naturel : ");
    scanf("%d", &n);
    
    // Cas où n est 0
    if (n == 0) {
        printf("0");
    } else {
        // Affiche l'écriture binaire du nombre
        afficherBinaireRecursive(n); //ou Non Recursive
    }
    
    printf("\n");
    return 0;
}

#include <stdio.h>
//include <math.h> //Pour utiliser pow()

int estArmstrong(int n) {
    int original = n;
    int somme = 0;
    int nombreDeChiffres = 0;
    int tmp;
    
    // Calculer le nombre de chiffres de n
    while (n != 0) {
        n /= 10;
        nombreDeChiffres++;
    }

    // Réinitialiser n à sa valeur d'origine pour le calcul de la somme
    n = original;

    int i;
    // Calculer la somme des puissances des chiffres
    while (n != 0) {
        int chiffre = n % 10;
        tmp=1;
        for (i=0; i<nombreDeChiffres; i++)
        {
            tmp=tmp*chiffre;
        }
        somme+=tmp;
        n /= 10;
    }

    // Comparer la somme à l'original
    return somme == original;
}

int main() {
    int n;

    // Demander à l'utilisateur de saisir un nombre
    printf("Saisir un nombre pour vérifier s'il est un nombre d'Armstrong: ");
    scanf("%d", &n);

    // Vérifier et afficher le résultat
    if (estArmstrong(n)) {
        printf("%d est un nombre d'Armstrong.\n", n);
    } else {
        printf("%d n'est pas un nombre d'Armstrong.\n", n);
    }

    return 0;
}


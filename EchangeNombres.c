#include <stdio.h>

void echange(int *nb1, int *nb2){ //Utiliser des pointeurs pour modifier les variables dans main
    int tmp; 
    printf("Avant echange: \n");
    printf("Nb1= %d\n", *nb1);
    printf("Nb2= %d\n", *nb2);

    tmp = *nb1;
    *nb1 = *nb2;
    *nb2 = tmp;

    printf("Après echange: \n");
    printf("Nb1= %d\n", *nb1);
    printf("Nb2= %d\n", *nb2);
}

int main(){
    int nb1, nb2;
    nb1 = 5;
    nb2 = 7;

    printf("Avant appel de la fonciton : \n");
    printf("Nb1= %d\n", nb1);
    printf("Nb2= %d\n", nb2);

    printf("Appel de la fonction echange\n");
    echange(&nb1, &nb2); //Passage aux pointeurs pour modifier les valeurs de nb1, nb2

    printf("Après appel de la fonction: \n");
    printf("Nb1= %d\n", nb1);
    printf("Nb2= %d\n", nb2);
    
    return 0;
}

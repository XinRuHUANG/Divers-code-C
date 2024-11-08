#include <stdio.h>

void affichageSapin(int n){
    int i, j, k;

    printf("Saisir la hauteur du sapin: \n");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        for (j=0; j<(n-i); j++){
            printf(" ");
        }
        for (j=0; j<2*i+1; j++) {
            printf("*");
        }
        for (j=0; j<(n-i); j++){
            printf(" ");
        }
        printf("\n");
    }
    for (k=0; k<3; k++){
        for (j=0; j<n-1; j++){
            printf(" ");
        }
        for (j=0; j<3; j++){
            printf("@");
        }
        for (j=0; j<n-1; j++){
            printf(" ");
        }
    printf("\n");
    }
}

int main(){
    int n;
    affichageSapin(n);

    return 0;
}

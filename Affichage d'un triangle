#include <stdio.h>

void affichageTriangle(int n){
    int i, j;

    printf("Saisir la hauteur du triangle: \n");
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
}

int main(){
    int n;
    affichageTriangle(n);
    return 0;
}

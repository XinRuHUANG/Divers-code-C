#include <stdio.h>

void rangFactorielle(int k){
    int x, n;

    x=1;
    n=0;

    while (x<=k){
        n++;
        x=x*(n+1);
        printf("n= %d, x= %d\n", n, x);
    }
    printf("Le rang factorille de %d : %d\n", k, n);
}

int main(){
    int k;

    printf("Saisir un entier: \n");
    scanf("%d", &k);
    rangFactorielle(k);

    return 0;
}

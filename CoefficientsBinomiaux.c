#include <stdio.h>

void coefficientsBinomiaux(int n, int p){
    if (n<p){
        printf("Impossible");
    }
    else {
        int i, j1, j2;
        int num, den1, den2;
        num=1;
        den1=1;
        den2=1;

        for (i=1; i<n+1; i++){
            num*=i;
        }
        for (j1=1; j1<(n-p+1); j1++){
            den1*=j1;
        }
        for (j2=1; j2<p+1; j2++){
            den2*=j2;
        }
        printf("%d\n", num/(den1*den2));
    }
    
}

int main(){
    int n, p;

    printf("Saisir un entier n: \n");
    scanf("%d", &n);
    printf("Saisir un entier p: \n");
    scanf("%d", &p);

    coefficientsBinomiaux(n, p);
    return 0;
}

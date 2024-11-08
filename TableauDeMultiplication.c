#include <stdio.h>

void tableMultiplication(int n){
    int i; 
    printf("Saisir n: \n");
    scanf("%d", &n);
    for (i=1; i<11; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    }
}

int main(){
    int n;
    tableMultiplication(n);
    return 0;
}

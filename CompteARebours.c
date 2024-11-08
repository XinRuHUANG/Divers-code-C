#include <stdio.h>

int main(){
    int n, i;

    printf("Saisir n : \n");
    scanf("%d", &n);

    for (i=n; i>-1; i--) {
        printf("%d\n", i);
    }
}

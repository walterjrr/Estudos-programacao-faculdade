#include <stdio.h>
#include <stdlib.h>

int main () {
    int A=5, i, vet[A];

    for(i=0; i<A; i++){
        printf("\nDigite o numero %d: \t", i);
        scanf("%d", &vet[i]);
    }

    for ( i = 0; i < 6; i++){
        printf("\nA posição %d é igual a: %d \t", i, vet[i]);
    }
    

return 0;
}
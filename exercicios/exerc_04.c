#include <stdio.h>

int main(int argc, char const *argv[])
{
    int L[] = {-9, 2, -21, 14, 42, -3, 11, 18, 33, 46, 6};
    int M, M_pos, i, aux, tamanho, k, count, p;
    k = 5;
    tamanho = sizeof(L) / sizeof(L[0]);
    printf("tamanho = %d", tamanho);

 
    for(count = 0; count < k; count++){
        M = L[0];
        for(i = 0; i < tamanho - count; i++){
            if(L[i] > M){
                M = L[i];
                M_pos = i;
            }
        }
        p = tamanho - (count + 1);
        printf("valor de p=%d\n", p);
        aux = L[p];
        L[p] = M;
        L[M_pos] = aux;
    }

    for(i = 0; i < tamanho; i++){
        printf("%d ", L[i]);
    }
    printf("\n");

    return 0;
}

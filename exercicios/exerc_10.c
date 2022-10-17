#include <stdio.h>

int main(int argc, char const *argv[])
{
    int L1[] = {9, 42, 21, 14, 25, 3, 19, 33, 45, 6};
    int L2[] = {2, 15, 19, 12, 33, 9, 17, 41, 54, 8};
    int valor_1, valor_2, i,j, dobro, tamanho;

    tamanho = sizeof(L1) / sizeof(L1[0]);

    for(i = 0; i < tamanho; i++){
        // printf("%d ", L1[i]);
       for(j = 0; j < tamanho; j++){
            if(L1[i] == L2[j]){
                printf("%d ", L1[i]);
            }
       } 
    }
    return 0;
}

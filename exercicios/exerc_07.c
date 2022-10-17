#include <stdio.h>

int main(int argc, char const *argv[])
{
    int L[] = {90, 3, 4, 5, 90, 3, 3, 3, 3, 2, 6, 7,8};
    int valor_1, valor_2, i,j, dobro, tamanho;

    tamanho = sizeof(L) / sizeof(L[0]);

    for(i = 0; i < tamanho; i++){
        dobro = L[i] * 2;
       for(j = 0; j < tamanho; j++){
            if(dobro == L[j] || L[i] % L[j] == 0){
                valor_1 = L[i];
                valor_2 = L[j];
                break;
            }
       } 
    }
    printf("sim, os valores %d e %d", valor_1, valor_2);
    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int L[] = {2, 3, 4, 5, 2, 3, 3, 3, 3, 2, 7, 7,8};
    int aprox_dir, aprox_esq, valor = 0, i, aux = 0,j, tamanho, k, conta_impar;
    k = 42;

    tamanho = sizeof(L) / sizeof(L[0]);

    conta_impar = 0;
    for (i = 0; i < tamanho; i++){
        if(L[i] % 2 != 0){
            for(j = 0; j < tamanho; j ++){
                if(L[i] == L[j]){
                    conta_impar += 1;
                }
            }
            if(conta_impar % 2 != 0){
                valor = L[i];
            }
        }
        aux = conta_impar;
    }

    printf("valor impar %d \n", valor);

    
    return 0;
}
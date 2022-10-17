#include <stdio.h>

// Encontrar o segundo maior número ímpar da lista L

int main(int argc, char const *argv[])
{
    
    int L[] = {-9, 42, -21, 14, 28, -3, 11, 18, 32, 46, 6};
    int M_impar, SM_impar, i, aux, tamanho;

    tamanho = sizeof(L) / sizeof(L[0]);


    for (i = 0; i < tamanho; i++){
        if(L[i] % 2 != 0){ /* verificando se o valor actual é ímpar*/
            if(i == 0){
                M_impar = L[i];
                continue;
            }
            if(L[i] > M_impar){ /* Comparando se o valor actual é maior que o maior ímpar*/
                // fazndo as trocas dos valores
                aux = M_impar;
                M_impar = L[i];
                SM_impar = aux;
            }else{
                if(L[i] > SM_impar){ /* verficando se o valor actual é mesmo maior que o 2º maior impar*/
                    SM_impar = L[i];
                }
            }
        }
    }


    printf("O maior numero impar he: %d\nO Segundo maior numero impar he: %d\n", M_impar, SM_impar);

    return 0;
}

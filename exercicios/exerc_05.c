#include <stdio.h>

int main(int argc, char const *argv[])
{
    int L[] = {-9, 2, -21, 14, 42, -3, 11, 18, 33, 46, 6};
    int aprox_dir, aprox_esq, M_pos, i, aux, tamanho, k, count, presente = 0;
    k = 42;

    tamanho = sizeof(L) / sizeof(L[0]);

    for(i = 0; i < tamanho; i++){
        if(L[i] == k){
            presente = 1;
            break;
        }

        if(i == 0){
            if(L[i] > k){
                aprox_dir = L[i];
            }else{
                aprox_esq = L[i];
            }
        }

        if(L[i] > k){
            if(L[i] < aprox_dir) aprox_dir = L[i];
        }else{
            if(L[i] > aprox_esq) aprox_esq = L[i];
        }
    }
    
    printf("os mais procimos sao: %d e %d", aprox_esq, aprox_dir);

    
    return 0;
}

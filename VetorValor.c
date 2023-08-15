#include <stdio.h>

/*A passagem de parametros se dá por valor, logo a função
não modifica o vetor fora dela*/

void exibirArray(int array[], int tamanho){
    for (int i = 0; i < tamanho; i++)
     printf("%d\t", array[i]);
    printf("\n");
}

/*Na passagem por referência, o endereço de memória do vetor é 
passado para a fução*/

void modificarArray(int *array, int tamanho){
    for (int i = 0; i < tamanho; i++){
     array[i] = array[i] *2;
    }
}
int main(){

    int meuArrey[] = {2, 5, 6, 9, 0};
    int tamanho = sizeof(meuArrey) / sizeof(meuArrey[0]);
    exibirArray(meuArrey, tamanho);
    modificarArray(meuArrey, tamanho);
    exibirArray(meuArrey, tamanho);
    
    return 0;
}
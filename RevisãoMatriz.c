#include <stdio.h>

int main(){

//Exemplo de uma matriz de inteiros 2x3

int soma = 0;
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

//Acessando os elementos da matriz

printf("Elemento da segunda linha e terceira coluna: %d\n", matriz[1][2]);

//saida: Elemento na segunda linha, terceira coluna: 6

//Somando todos os elementos da matriz

for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)

soma = soma + matriz[i][j];

printf("\na soma dos elementos eh: %d\n", soma);

return 0;

}
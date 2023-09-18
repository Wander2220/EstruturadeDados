#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nomes[20][20] = {"maca", "bananaa", "pera", "uva", "laranja", "abacaxi", "limao", "manga", "abacate", "kiwi", "cereja", "morango", "pessego", "goiaba", "melancia", "framboesa", "amora", "caqui", "figo", "papaya"};

void ordenar(int *trocas, int *comparacao)
{
    int x, y, r;
    char aux[80];

    *trocas = 0;
    *comparacao = 0;

    for (x = 0; x <= 19; x++)
    {
        for (y = x + 1; y <= 19; y++)
        {
            (*comparacao)++;
            r = strcmp(nomes[x], nomes[y]);
            if (r > 0)
            {
                strcpy(aux, nomes[x]);
                strcpy(nomes[x], nomes[y]);
                strcpy(nomes[y], aux);
                (*trocas)++; 
        }
    }
}
}
int main()
{

    FILE *arquivo = fopen("ArquivoSaida.txt","w");

    int x, trocas, comparacao;
    printf(" Vetor nao ordenado!\n\n");
    fprintf(arquivo," Vetor nao ordenado!\n\n");
    
    for (x = 0; x <= 19; x++)
    {
        printf("(%d) %s, ",x+1, nomes[x]);
        fprintf(arquivo,"(%d) %s ,",x+1, nomes[x]);
    }

    ordenar(&trocas, &comparacao);

    printf("\n\n Vetor ordenado!\n\n");
    fprintf(arquivo,"\n\n Vetor ordenado!\n\n");
    
    for (x = 0; x <= 19; x++)
    {
        printf("(%d) %s, ",x+1, nomes[x]);
        fprintf(arquivo,"(%d) %s, ",x+1, nomes[x]);
    }
     
    printf("\n\nNumero de trocas: %d\n", trocas);
    fprintf(arquivo,"\n\nNumero de trocas: %d\n", trocas);
    printf("Numero de comparacoes realizadas foram : %d\n",comparacao);
    fprintf(arquivo,"Numero de comparacoes realizadas foram : %d\n",comparacao);

    printf("A String mediana e: %s\n", nomes[9]);
    fprintf(arquivo,"A String mediana e: %s\n", nomes[9]);

    fclose(arquivo);

    return 0;
}
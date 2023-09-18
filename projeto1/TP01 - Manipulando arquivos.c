#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[100];
    char telefone[15];
    char curso[50];
    float nota1;
    float nota2;
    float media;
    char situacao[20];
};

int main() {
    FILE *entrada = fopen("DadosEntrada.csv", "r");
    FILE *saida = fopen("SituacaoFinal.csv", "w");
    if (entrada == NULL || saida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }
    struct Aluno aluno;
    while (fscanf(entrada, "%[^,],%[^,],%[^,],%f,%f\n", aluno.nome, aluno.telefone, aluno.curso, &aluno.nota1, &aluno.nota2) != EOF) {
        aluno.media = (aluno.nota1 + aluno.nota2) / 2;
        if (aluno.media >= 7.0) {
            strcpy(aluno.situacao, "APROVADO");
        } else {
            strcpy(aluno.situacao, "REPROVADO");
        }
        fprintf(saida, "%s, %.2f, %s\n", aluno.nome, aluno.media, aluno.situacao);
    }

    fclose(entrada);
    fclose(saida);

    printf("Dados processados com sucesso \n");

    return 0;
}

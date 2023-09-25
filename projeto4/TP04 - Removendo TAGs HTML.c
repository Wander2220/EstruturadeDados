#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "C:/Users/wanderson.oliveira/Documents/GitHub/EstruturadeDados/projeto4/output/codigo.html"; 

    arquivo = fopen("C:/Users/wanderson.oliveira/Documents/GitHub/EstruturadeDados/projeto4/output/codigo.html", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int dentroTag = 0;
    char caractere;

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '<') {
            dentroTag = 1;
        } else if (caractere == '>') {
            dentroTag = 0;
            continue;
        }

        if (!dentroTag) {
            putchar(caractere);
        }
    }

    fclose(arquivo);

    return 0;
}

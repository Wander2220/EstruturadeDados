#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float X;
    float Y;
} Ponto;

int main() {
    FILE *arquivo;
    int numVertices;
    float area = 0.0;

    arquivo = fopen("vertices.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }
   
    fscanf(arquivo, "%d", &numVertices);


    Ponto *vertices = (Ponto *)malloc(numVertices * sizeof(Ponto));
    for (int i = 0; i < numVertices; i++) {
        fscanf(arquivo, "%f %f", &vertices[i].X, &vertices[i].Y);
    }

    fclose(arquivo);

    for (int i = 0; i < numVertices; i++) {
        int j = (i + 1) % numVertices;
        area += (vertices[i].X * vertices[j].Y) - (vertices[j].X * vertices[i].Y);
    }
    area = 0.5 * abs(area);

    printf("A área do polígono é %.2f\n", area);
    free(vertices);

    return 0;
}

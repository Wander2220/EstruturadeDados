#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Fibonacci(int N){
    if (N == 1) return 1;
    if (N == 2) return 1;
    return Fibonacci(N - 1) + Fibonacci (N - 2);
}

int main(){
                                        
    clock_t MomentoInicial, MomentoFinal;
    double Tempo;

    MomentoInicial = clock();
    int X = Fibonacci(20);
    MomentoFinal = clock();

    Tempo = ((double) (MomentoFinal - MomentoInicial))/CLOCKS_PER_SEC;

    printf("Termo da serie: %d\n", X);
    printf("tempo de execucao: %f\n", Tempo);
}
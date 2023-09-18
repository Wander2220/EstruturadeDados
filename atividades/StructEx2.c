#include <stdio.h>

struct Pessoa{
    char nome[20];
    int idade;
};

/*Em modificarPessoa, a passagem de parametros se da por REFERENCIA*/

void modificarPessoa(struct Pessoa *p){
    p->idade +=1;
}

  void testarPessoa(struct Pessoa x){
    x.idade = x.idade * 2;
  }

int main(){
    struct Pessoa x = {"Joao", 25};

    modificarPessoa(&x);
    printf("\nnome: %s\n", x.nome);
    printf("\nidade: %d\n", x.idade);

    testarPessoa(x);
    printf("\nnome: %s\n", x.nome);
    printf("\nidade: %d\n", x.idade);

    return 0;
}

#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[20];
    int idade;
    float altura;
};

int main(){
//Exemplo de uma struct Pessoa
 struct Pessoa x;
 strcpy(x.nome, "joao");
 x.idade = 25;
 x.altura = 1.75;

//Acessando os campos da struct
printf("Nome: %s\n", x.nome); //Saida: Nome: Joao
printf("Idade: %d\n", x.idade); //Saida: Idade: 25
printf("Altura: %.2f\n", x.altura); //Saida: Altura: 1.75

return 0;
}
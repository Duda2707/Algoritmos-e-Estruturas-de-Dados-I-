//3 Crie tipo abstrato de dados (TAD) que represente uma Pessoa, contendo nome, 
//data de nascimento e CPF. Crie uma vari´avel que ´e um ponteiro para essa TAD 
//(no programa principal). Depois crie uma fun¸c˜ao que receba este ponteiro e preencha
// os dados da estrutura (struct) e tamb´em uma uma fun¸c˜ao que receba este ponteiro e
// imprima os dados da estrutura. Finalmente, fa¸ca a chamada a esta fun¸c˜ao na fun¸c˜ao principal.

#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include<stdlib.h>

struct pessoa {
    char nome[100];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
    long cpf;
};


typedef struct pessoa Pessoa;

Pessoa receberDados(Pessoa *p){
    strcpy(p->nome,"vinicius");
    p->cpf = 35919351;
    p->diaNascimento = 22;
    p->anoNascimento = 1990;
    p->mesNascimento = 10;
}

void imprimirPessoa(Pessoa *p){
    printf("Nome: %s\nData de nascimento: %d/%d/%d\nCPF: %d ", p->nome,p->diaNascimento,p->mesNascimento,p->anoNascimento,p->cpf);
}

int main(){
    Pessoa *p = malloc(sizeof(Pessoa));
    receberDados(p);
    imprimirPessoa(p);

}
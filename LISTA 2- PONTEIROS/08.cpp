//8 Crie um programa que tenha duas fun¸c˜oes que ir˜ao receber como parˆametro um vetor. A primeira
//fun¸c˜ao deve receber um vetor de caracteres por parˆametro e um elemento inicial do tipo char. A segunda fun¸c˜ao imprime o vetor. Seu vetor deve ter um tamanho pr´e-definido e a impress˜ao consiste
//em mostrar todos os elementos a partir do elemento passado como parˆametro. Ex: se elemento
//for igual a ‘a’ e o tamanho do vetor igual a 5, a fun¸c˜ao de preencher ir´a preencher o vetor de ’a’ a
//’e’. A fun¸c˜ao de imprimir mostrar´a a posi¸c˜ao e o valor. Utilize aritm´etica de ponteiros pra facilitar.
//void preencheVetor(char *vetor, char elemento);
//void imprimeVetor(char *vetor);


#include <iostream>
#include <windows.h>
 
using namespace std;

void PreencheVetor(int* vet, int i, int tam, int n);
void ImprimeVetor(int * vet, int i, int tam);
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
  
  int *ptr;
  int vetor[5];
  ptr = &vetor[0];

  PreencheVetor(ptr, 0, 5, 1);
  
  cout << "Vetor: ";
  
  ImprimeVetor(ptr, 0, 5);
  return 0;
}

void PreencheVetor(int* vet, int i, int tam, int n) {
    for (i = 0; i < tam; i++) {
        *(vet + i) = n++;
    }
    cout << endl;
}

void ImprimeVetor(int* vet, int i, int tam) {
    for (i=0; i < tam; i++) {
        cout << *(vet + i) * 2 << " ";
    }
    cout << endl;
}
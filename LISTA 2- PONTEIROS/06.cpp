//6 Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas
//aritm´etica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

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
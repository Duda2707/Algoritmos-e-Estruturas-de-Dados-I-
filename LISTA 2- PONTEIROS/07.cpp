//7 Crie uma fun¸c˜ao que receba como parˆametro um array e o imprima. N˜ao utilize ´ındices para
//percorrer o array, apenas aritm´etica de ponteiros.

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
        cout << *(vet + i) << " ";
    }
    cout << endl;
}
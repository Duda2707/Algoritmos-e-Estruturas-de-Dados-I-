//4 Fa¸ca um programa que leia 2 valores inteiros e chame uma fun¸c˜ao que receba estas duas vari´aveis
//e troque o seu conte´udo, ou seja, esta fun¸c˜ao ´e chamada passando duas vari´aveis A e B, por
//exemplo, e ap´os a execu¸c˜ao da fun¸c˜ao, A conter´a o valor de B e B ter´a o valor de A.

#include <iostream>
#include <windows.h>
 
 void trocaconteudo(int *a, int *b){
     int *aux;
      *aux = *a;
      *a = *b;
      *b = *aux;

 

 }
using namespace std;
 
int main()
{
    int var1;
    int var2;

    cout << "Digite o valor da 1 variavel";
    cin >> var1;
    cout << "Digite o valor da 2 variavel";
    cin >> var2;
    
    trocaconteudo(&var1, &var2);
     cout <<"v1 = "<< var1 << "  v2 = " << var2;


}
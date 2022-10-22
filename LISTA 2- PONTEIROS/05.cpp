//5 Crie um programa que contenha uma fun¸c˜ao que permita passar por parˆametro dois n´umeros
//inteiros A e B. A fun¸c˜ao dever´a calcular a soma entre estes dois n´umeros e armazenar o resultado
//na vari´avel A. Esta fun¸c˜ao n˜ao dever´a possuir retorno, mas dever´a modificar o valor do primeiro
//parˆametro. Imprima os valores de A e B na fun¸c˜ao principal (main).

#include <iostream>
#include <windows.h>
 
 void trocaconteudo(int *a, int *b){
     int *soma;
      *soma = *a + *b;
      *a = *soma;
 }
using namespace std;
 
int main()
{
    int var1;
    int var2;

    cout << "Digite o valor de a";
    cin >> var1;
    cout << "Digite o valor de b";
    cin >> var2;
    
    trocaconteudo(&var1, &var2);
     cout <<"v1 = "<< var1 << "  v2 = " << var2;


}
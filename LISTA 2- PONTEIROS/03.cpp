//3 Escreva um programa que contenha duas vari´aveis inteiras. Leia essas vari´aveis do teclado. Em
//seguida, compare seus endere¸cos e exiba o conte´udo do maior endere¸co.
#include <iostream>
#include <windows.h>
 
 
using namespace std;
 
int main()
{
    int var1;
    int var2;

    cout << "Digite o valor da 1 variavel";
    cin >> var1;
    int *ponteiro1 = &var1;
    cout << "Digite o valor da 2 variavel";
    cin >> var2;
    int *ponteiro2 = &var2;
    

    cout <<"v1 = "<< var1 << "  endereco = " << &ponteiro1;
    cout <<"\n\nv2 = "<< var2 << "  endereco = " << &ponteiro2;
    if(&ponteiro1 > &ponteiro2 )
    {
      cout << "\n\nValor do endereco variavel 1 e maior";
    }else
    {
       cout << "\n\nValor do endereco variavel 2 e maior";
    }

}
//2 Escreva um programa que contenha duas vari´aveis inteiras. Compare seus endere¸cos e exiba o
//maior endere¸co.
#include <stdio.h>
#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main()
{
    int var1;
    int *ponteiro1 = &var1;
    
    int var2;
    int *ponteiro2 = &var2;
    cout <<"v1 = "<< &ponteiro1;
    cout <<"\n\nv2 = "<< &ponteiro2;
    if(&ponteiro1 > &ponteiro2 )
    {
      cout << "\n\nValor do endereco variavel 1 e maior";
    }else
    {
       cout << "\n\nValor do endereco variavel 2 e maior";
    }

}
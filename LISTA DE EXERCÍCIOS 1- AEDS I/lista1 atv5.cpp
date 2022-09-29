#include <iostream>
#include <windows.h>
#include <fstream>
 
using namespace std;
 
int main() {

char produto[30];
float quantidade, valor, total = 0;

FILE *arquivo = fopen("compras.txt", "r");

if(arquivo == NULL)
{
    cout<<"ERRO! o arquivo nao foi aberto";
}



while(!feof(arquivo))
{
    //cin
    //%s e char
    //%f float
    fscanf(arquivo, "%s %f %f", produto, &quantidade, &valor);
    total = quantidade * valor;
    //3.2 exibe o numero de casas antes e depois da virgula
    printf("total: %3.2f \n", total);
}

  
 
 
  cout << endl;
  return 0;
}
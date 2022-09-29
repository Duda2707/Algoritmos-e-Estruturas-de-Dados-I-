#include <iostream>
#include <windows.h>
#include <fstream>

 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
    ifstream arquivo;
     string nome;

     cout<<"Informe o nome do arquivo que deseja abrir: ";
     cin >>nome;

    //usei o arquivo ja criado text.txt
     arquivo.open(nome);
     if(!arquivo.is_open())
     {
         cerr<<"ERRO! Nao existe este arquivo";
         arquivo.clear();
         return -1;
     }
     else
     {
         cout<<"Arquivo encontrado e aberto com sucesso!";
     }
 
 
  cout << endl;
  return 0;
}
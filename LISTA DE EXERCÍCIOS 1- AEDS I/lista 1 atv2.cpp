#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

typedef struct Pessoa
{
  char nome[50];
  char telefone[50];
};

int main()
{

  Pessoa amigos[5];

  ofstream arquivo;
  arquivo.open("teste.xls", ios::out);
  arquivo << "A\t";
  arquivo << "B\n";

  //Salva no arquivo criado com inserção ios::out
  for (int i = 0; i < 5; i++)
  {
    cout << "Nome: ";
    cin >> amigos[i].nome;
    cout << "Telefone: ";
    cin >> amigos[i].telefone;

    arquivo << " ";
    arquivo << amigos[i].nome << endl;
    arquivo << "        ";
    arquivo << amigos[i].telefone << endl;
  }
  cout << endl;
  return 0;
}
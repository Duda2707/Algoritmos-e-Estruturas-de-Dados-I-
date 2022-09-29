#include <iostream>
#include <windows.h>
#include <fstream>
 
using namespace std;
 
 
  string Binario(int numero)
  {
      string p;
      while(numero != 0)
      {
          p = p + (numero%2 == 0 ? "0" :"1");
          numero/=2;
      }
      return p;

  }

int main() {
 
 int numero[10];

 ofstream arquivo;

 arquivo.open("teste2.txt", ios::out);

 for(int i = 0; i < 10; i++)
 {
     cout<<"Numero ";
     cin >> numero[i];

     arquivo <<"Binario: "<< Binario(numero[i]) << endl;
 }
 
  cout << endl;
  return 0;
}
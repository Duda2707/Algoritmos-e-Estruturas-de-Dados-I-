#include <iostream>
#include <windows.h>
#include <fstream>
#include <time.h>
 
using namespace std;
 
int main() {

int op;

ofstream arquivo;
arquivo.open("matriz.xls", ios::out);
cout<<"Informe o quadrado da matriz que deseja criar: ";
cin>>op;

int matriz[op][op];

for(int i = 0; i < op; i++)
{
    arquivo<<endl;

    for(int j = 0; j < op; j++)
    {
        arquivo<<"      ";
        arquivo << &matriz[i][j];
    
    }
}
 
 
  cout << endl;
  return 0;
}
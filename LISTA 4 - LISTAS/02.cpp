//2 Fa¸ca um programa em C/C++ que, utilizando as TADs desenvolvidas em aula, concatene duas
//listas encadeadas. Seu programa deve exibir como resultado uma lista L3 que seja resultado da
//concatena¸c˜ao de duas listas iniciais L1 e L2 (todos os itens de L1 seguidos de todos os itens de
//L2).
#include <iostream>
#include <windows.h>
 #include "lista.hpp"
#include "lista.cpp"

using namespace std;

 void concatenaListas(TipoLista *l1, TipoLista *l2, TipoLista *l3)
{
    Apontador x;
    TipoItem item;
     x = l2->primeiro;

      while(x!= NULL)
    {
       RemoveListaUltimo(l2);
       InsereListaPrimeiro(l3,&item);
        x = x->prox;
    }
    x = l1->primeiro;
     while(x!= NULL)
    {
       RemoveListaUltimo(l1);
       InsereListaPrimeiro(l3,&item);
        x = x->prox;
    }
}
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  
 
 
  cout << endl << endl;
  return 0;
}
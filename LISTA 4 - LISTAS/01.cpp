//Escreva uma fun¸c˜ao em C/C++ para trocar dois elementos de posição em uma lista com arranjo.

#include <iostream>
#include <windows.h>
#include "lista.hpp"
#include "lista.cpp"

using namespace std;

int main()
{
    TipoLista lista;
    TipoItem item;
    int tam;

CriaListaVazia(&lista);
    for (int i = 0; i < 2; i++)
    {

        cout << "Digite o valor da " << i + 1 << " posição";
        cin >> lista.primeiro->item.id;
        InsereListaUltimo(&lista, &item);
    }

    Troca(&lista);
    ImprimeLista(lista);

    return 0;
}
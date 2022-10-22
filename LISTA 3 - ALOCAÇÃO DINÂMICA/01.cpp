//Fa¸ca um programa que leia um valor n, crie dinamicamente um vetor de n elementos e passe esse
//vetor para uma fun¸c˜ao que vai ler os elementos desse vetor. Depois, no programa principal, o
//vetor preenchido deve ser impresso. Al´em disso, antes de finalizar o programa, deve-se liberar a
//´area de mem´oria alocada.
#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

void preenche(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 5;
    }
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
}




int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    srand(time(NULL));

    int tamanho, numero, *vetor;

    cout << "Tamanho do vetor: ";
    cin >> tamanho;

    vetor = new int[tamanho];

    preenche(vetor, tamanho);

    cout << endl;
    return 0;
}
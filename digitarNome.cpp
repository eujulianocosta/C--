#include <iostream>
#include <locale.h>

using namespace std;

/// Faça um programa que solicita que o usuário digite o seu nome e exiba a mensagem “Olá” seguido do nome digitado pelo usuário.

int main()
{

    /// Linguagem da Script = Português.

    setlocale(LC_ALL, "portuguese");

    string nome;
    cout << "Digite aqui seu nome: " << endl;
    cin >> nome;
    cout << "Olá, " << nome << endl;

    return 0;
}
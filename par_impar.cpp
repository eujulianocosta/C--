#include <iostream>
#include <locale.h>

/// Desenvolva um algoritmo para ler um número inteiro e dizer se ele é par ou ímpar.

using namespace std;

int main () {
    
    setlocale (LC_ALL, "portuguese");

    int numero;
    cout << "Digite um número para saber se ele é par ou ímpar: " <<endl;
    cout << "\n";
    cin >> numero;
    if (numero%2 == 0) {
        cout << "\nEsse número é Par. " <<endl;
    }
     else {
         cout << "\nEsse número é Ímpar. " <<endl;
     }

    return 0;
}
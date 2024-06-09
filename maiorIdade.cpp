#include <iostream>
#include <locale.h>

/// Fazer um algoritmo para ler a idade de uma pessoa e imprimir a mensagem “Você é maior de idade” se ela tiver 18 anos ou mais, ou “Você é menor de idade”caso contrário.

using namespace std;

int main () {
    
    setlocale (LC_ALL, "portuguese");

    int idade;
    cout << "Qual à sua idade? " <<endl;
    cout << "\n";
    cin >> idade;
    if (idade >= 18) {
        cout << "\nVocê é maior de Idade. " <<endl;
    }
     else {
         cout << "\nVocê é menor de idade. " <<endl;
     }

    return 0;
}
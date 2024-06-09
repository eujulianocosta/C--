#include <iostream>
#include <locale.h>

/// Desenvolva um algoritmo para ler um número inteiro e dizer se ele é par ou ímpar.

using namespace std;

int main () {
    
    setlocale (LC_ALL, "portuguese");

    float mediafinal, frequencia;
    string nome;

    cout << "Digite seu Nome? ";
    cin >> nome;
    cout << "Qual a sua média Final? ";
    cin >> mediafinal;
    cout << "Quantas faltas você teve? ";
    cin >> frequencia;

    if (mediafinal >=6){
        if (frequencia <= 18){
            cout << nome << ", você foi aprovado! ";
        } else
            cout << nome << ", você foi reprovado por falta.";
    } else if (frequencia <=18){
        cout << nome << ", você foi reprovado por Nota."; 
    } else {
        cout << nome << ", você foi reprovado por Nota e Faltas.";
    }

    return 0;
}
#include 	<iostream>
#include	<stdio.h>
#include	<string>
#include	<locale.h>
#include 	<stdlib.h>

    using namespace std;

    /* (Nível 2) Tendo como dados de entrada a altura (h), sexo e peso de uma pessoa, construa um algoritmo que calcule seu peso 
ideal, imprimindo ‘Você está em forma’ caso o peso da pessoa seja menor ou igual ao peso ideal. Caso contrário, o algoritmo 
deve imprimir ‘Melhor fazer uma dieta’. O peso ideal é calculado utilizando as seguintes fórmulas:

para homens: (72,7 x h) – 58,0;
para mulheres: (62,1 x h) – 44,7. */

int main () {

    setlocale (LC_ALL, "Portuguese_Brasil.1252");
    
    int sexo;
    float peso, h, peso_ideal;

    cout << "Digite sua altura em metros: ";
    cin >> h;

    cout << "Digite o seu peso: ";
    cin >> peso;

    cout << "Caso você é homem digite 1, caso for mulher digite 2: ";
    cin >> sexo;
    sexo = sexo % 2;

    if (sexo == 0) {
        peso_ideal = (62.1 * h) - 44.7;
    } else {
        peso_ideal = (72.7 * h) - 58.0;
    }

    if (peso <= peso_ideal) {
        cout << "Você está em forma" << endl;
    } else if (peso > peso_ideal) {
        cout << "Melhor fazer uma dieta" << endl;
    }

    return 0;
}

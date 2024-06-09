#include <iostream>
#include <locale.h>

using namespace std;

/// Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.

int main () {

    setlocale (LC_ALL, "portuguese");

    int cavalo, ferraduras, resultado;

    cout<<"Calcule o numero de Cavalos: "<<endl;
    cout << "\n";
    cin >> cavalo;

    ferraduras= 4*cavalo;
    resultado = ferraduras;

    cout << "Quantidade necessarias de ferraduras são: " << resultado <<endl; 

return 0;

}
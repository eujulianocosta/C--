#include <iostream>
#include <locale.h>

/// Fazer algoritmo que inclui a possibilidade de apresentar a mensagem que o aluno foi aprovado ou reprovado.

using namespace std;

int main () {
    
    setlocale (LC_ALL, "portuguese_brasil.1252");

    int n1, n2, soma;
    cout << "Entre com 2 Valores: " <<endl;
    cin >> n1 >> n2;
    soma = (n1 + n2) / 2.0;
    if (soma >= 6) {
        cout << "\nAprovado com média " <<soma<<".";
    }
     else {
         cout << "Reprovado com média " <<soma<<".";

     }

    return 0;
}
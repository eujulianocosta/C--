#include <iostream>
#include <locale.h>

using namespace std;

/// Faça um algoritmo para exibir a multiplicação de Dois Números inteiros fornecidos pelo usuário.

int main(){
	
	/// Script ativada em Português.
	
	setlocale (LC_ALL, "portuguese");
		
	/// Calculo da soma de 2 numero inteiros.

    int n1,n2,soma;
	
	cout<<"Digite o Nº a somar: "<<endl;
	cout<<"\n";
	cin>>n1>>n2;
	soma=n1+n2;
	cout<<"Resultado = "<<soma<<endl;	
		
    return 0;

}
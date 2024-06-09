#include <iostream>
using namespace std;

int main(){
	

	/// Declaracao de Variáveis -- Tipo Float
	
	float a,b,c,d,e,f,g;
	float resultado1,resultado2,resultado3,x,y;
	
	/// Declaracao de Variáveis -- Tipo Int
	
	int h,i,j,k,l,m,n;
	int resultado4,resultado5,resultado6,x7,y8;
	
	/// Declaração de Pular Linha e Texto
	
	/// cout<<"\n";
	
	/// Atribuição de Valores as Variáveis
	
	a=3.0;
	b=2.0;
	c=5.0;
	d=4.0;
	e=10.0;
	f=2.0;
	g=3.0;
	
	/// Cálculo das Expressões
	
	resultado1=a*b+c*d+e/f/g;
	resultado2=a*(b+c)*d+(e/f)/g;
	resultado3=a*(b+c)*(d+e)/f/g;
	x=2.+3.-5.*8./4.;
	y=7.-4./2.+9.-6.;
	
	/// Impressao dos Resultados exercicios página 23 do PDF.
	
	cout<<"Impressão dos resultados do exercicios página 23 do PDF. Em modo Float."<<endl;
	cout<<"\n";
	cout<<"Resultado 1 = "<<resultado1<<endl;
	cout<<"Resultado 2 = "<<resultado2<<endl;
	cout<<"Resultado 3 = "<<resultado3<<endl;
	cout<<"Resultado de x = "<<x<<endl;
	cout<<"Resultado de y = "<<y<<endl;
	
	/// Atribuicao de Valores as Variáveis
	
	h=3;
	i=2;
	j=5;
	k=4;
	l=10;
	m=2;
	n=3;
	
	/// Cálculo das Expressoes
	
	resultado4=a*b+c*d+e/f/g;
	resultado5=a*(b+c)*d+(e/f)/g;
	resultado6=a*(b+c)*(d+e)/f/g;
	x7=2+3-5*8/4;
	y8=7-4/2+9-6;
	
	/// Comando abaixo para pular linha de uma atividade para a outra.
	/// cout<<"\n";
	/// Impressao dos Resultados exercicios página 24 do PDF.
	
	cout<<"\n";
	cout<<"Impressão dos resultados do exercicios página 24 do PDF. Em modo Int."<<endl;
	cout<<"\n";
	cout<<"Resultado 1 = "<<resultado4<<endl;
	cout<<"Resultado 2 = "<<resultado5<<endl;
	cout<<"Resultado 3 = "<<resultado6<<endl;
	cout<<"Resultado de x = "<<x7<<endl;
	cout<<"Resultado de y = "<<y8<<endl;
	
    return 0;
}
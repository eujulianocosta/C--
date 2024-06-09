#include 	<iostream>
#include	<stdio.h>
#include	<string>
#include	<locale.h>
#include 	<stdlib.h>

	using namespace std;

int main(){
	
	int opcaoP1=0, opcaoP2=0, opcaoP3=0, opcaoP4=0;
	string pressione;
	setlocale(LC_ALL, "portuguese_brasil.1252");
	
	cout << "SEJA BEM VINDO AO JOGO" << endl;
	cout << "  EFEITO BORBOLETA\n" << endl;
	cout << "O simples bater de asas de uma borboleta no Brasil pode ocasionar um tornado no Texas..." <<endl;
	cout << "Teoria do Caos\n\n" << endl;

	cout << "  Pressione enter para começar" << endl;	
	
	cin.get();
	system("clear");

 	/*Evan frequentemente sofre apagões, muitas das vezes, em momento de alto estresse. Na
 juventude e na adolescência, Evan sofreu graves traumas entre rejeição e psicológicos. Esses traumas
 incluem ser forçado pelo vizinho Jorge a participar de uso de drogas ou de até mesmo
 presenciar o assassinato de seus pais feito por um cara chamado Tomy e um amigo Ken que
 em um acidente de carro ficou sem o movimento das duas pernas. Evan tinha um diário onde
 ele escrevia absolutamente tudo e sempre andava com ele para que em cada apagão se
 lembra-se do ocorrido.*/

    cout << "Evan frequentemente sofre apagões, muitas das vezes, em momento de alto estresse. Na" << endl;
	cout << "juventude e na adolescência, Evan sofreu graves traumas entre rejeição e psicológicos. Esses traumas" << endl;
	cout << "incluem ser forçado pelo vizinho Jorge a participar de uso de drogas ou de até mesmo" << endl;
	cout << "presenciar o assassinato de seus pais feito por um cara chamado Tomy e um amigo Ken que" << endl;
	cout << "em um acidente de carro ficou sem o movimento das duas pernas. Evan tinha um diário onde" << endl;
    cout << "ele escrevia absolutamente tudo e sempre andava com ele para que em cada apagão se" << endl;
	cout << "lembra-se do ocorrido.\n\n" << endl;
	
	cout << "  Pressione enter para continuar" << endl;		
	cin.get();
	system("clear");
	
	
       	/* Sete anos mais tarde, quando estava se divertindo com sua namorada Katy em seu dormitório
 da universidade, ele percebe que quando ele lê seus diários de quando era adolescente, ele
 pode viajar de volta no tempo e é capaz de refazer as partes do seu passado. Porém em seu
 tempo viajando, conta episódios que explica seus frequentes apagões que teve quando era
 criança. No entanto, cada escolha influencia na sua vida presente, por exemplo, as alterações
 em sua antiga linha do tempo pessoal leva a futuros alternativos em que ele se encontra, um
 estudante universitário em uma fraternidade, um detento preso por assassinar seus pais um
 amigo amputado.*/
    
    cout << "Sete anos mais tarde, quando estava se divertindo com sua namorada Katy em seu dormitório" << endl;
    cout << "da universidade, ele percebe que quando lê seus diários de quando era adolescente, ele" << endl;
    cout << "pode viajar de volta no tempo e é capaz de refazer as partes do seu passado. Porém em seu" << endl;
    cout << "tempo viajando, conta episódios que explica seus frequentes apagões que teve quando era" << endl;
    cout << "criança. No entanto, cada escolha influencia na sua vida presente, por exemplo, as alterações" << endl;
    cout << "em sua antiga linha do tempo pessoal leva a futuros alternativos em que ele se encontra, um" << endl;
    cout << "estudante universitário em uma fraternidade, um detento preso por assassinar seus pais um" << endl;
    cout << "amigo amputado.\n\n" << endl;
    
    cout << "  Pressione enter para continuar" << endl;		
	cin.get();
	system("clear");
  
   /*As ações que ele toma, permite que ele retorne ao momento dos apagões e mude a linha do
 tempo em cada novo futuro que ele acorda.
 Em um certo dia, Evan recebe um telefonema do hospital onde avisam que sua namorada Katy
 tinha sofrido um acidente de carro e estava em coma, desesperado Evan vai ao hospital e vê o
 estado critico de Katy.
 Evan pega seu Diário:
*/
 
	cout << "As ações que ele toma, permite que ele retorne ao momento dos apagões e mude a linha do" << endl;
	cout << "tempo em cada novo futuro que ele acorda.\n\n" << endl;

	cout << "  Pressione enter para continuar" << endl;		
	cin.get();
	system("clear");


	cout << "Em um certo dia, Evan recebe um telefonema do hospital onde avisam que sua namorada Katy" << endl;
	cout << "tinha sofrido um acidente de carro e estava em coma, desesperado Evan vai ao hospital e vê o" << endl;		
	cout << "estado critico de Katy." << endl;
	
	cout << "Evan pega seu Diário:\n" << endl;
	
	
	/*Alternativa 1
 Evan tenta mudar o passado? Para que nada aconteça com sua amada?
 Ao escolher essa alternativa: (Mensagem ao programador, Se escolher essa alternativa o texto
 continua abaixo.)
 
 Alternativa 2
Evan deixa nas mãos dos médicos e vê o que isso pode acontecer?
Ao escolher essa alternativa: Katy acaba falecendo, o assassino de seus pais continua preso,
seu amigo Ken sem o movimento de suas pernas e Evan sem sua amada. FIM (Jogar
Novamente).*/
	
	cout << "Alternativa 1" << endl;
	cout << "Evan tenta mudar o passado? Para que nada aconteça com sua amada?\n" << endl;


	cout << "Alternativa 2" << endl;
	cout << "Evan deixa nas mãos dos médicos e vê o que isso pode acontecer?\n" << endl;
	cout << "Escolha uma opção" << endl;
	cout<< "Digite 1 ou 2 " << endl;
	cin >> opcaoP1;
	system("clear");
	
	if(opcaoP1==2){

		/*Evan deixa nas mãos dos médicos e vê o que isso pode acontecer?
Ao escolher essa alternativa: Katy acaba falecendo, o assassino de seus pais continua preso,
seu amigo Ken sem o movimento de suas pernas e Evan sem sua amada.*/

		cout <<"  Katy acaba falecendo, o assassino de seus pais continua preso,"<< endl;
		cout <<" seu amigo Ken sem o movimento de suas pernas e Evan sem sua amada."<< endl;
		cout << "Fim de Jogo. Inicie novamente. "<< endl;
		return 0;
	}
	else if(opcaoP1==1){

		/*Continuação Alternativa 1
Ao ler o diário para antes do ocorrido com Katy, Evan apaga e acorda em outro local, vê sua
amada viva, porém, Evan está expulso da faculdade e Jorge a pessoa que obrigava Evan a usar drogar
é o melhor amigo de Katy na faculdade a qual Evan foi expulso.
Evan com ciúmes e medo de Jorge fazer algo com sua amada, pega seu diário a fim de se livrar
de Jorge.

Evan com seu diário em mãos volta no tempo:*/

        cout << "Ao ler o diário para antes do ocorrido com Katy, Evan apaga e acorda em outro local, e vê sua" << endl;
	    cout << "amada viva, porém, Evan está expulso da faculdade e Jorge a pessoa que obrigava Evan a usar" << endl;
	    cout << "drogas é o melhor amigo de Katy na faculdade a qual Evan foi expulso." << endl;
	    cout << "Evan com ciúmes e medo de Jorge fazer algo com sua amada, pega seu diário a fim de se livrar" << endl;
	    cout << "de Jorge." << endl; 
	
	}
	else{
		cout <<"Opção inválida tente novamente";
		return 0;
	}
	
	cout << "Evan com seu diário em mãos pensa em voltar no tempo:\n\n" << endl;
	
	/*Alternativa 1
Evan volta no tempo para se livrar de Jorge?
Ao escolher essa alternativa: Jorge nunca apareceu, porém Katy agora está sem o movimento
das pernas e de cadeira de rodas e o amigo que antes não tinha os movimentos, volta a andar
e Tomy que assassinou seus pais agora está solto.*/

	cout << "Alternativa 1" << endl;
	cout << "Evan volta no tempo para se livrar de Jorge?\n\n" << endl;
	
	/*Alternativa 2
	Evan diz que está tudo bem, desiste de voltar no tempo e vive com Jorge ao lado de sua amada
onde Jorge pode oferecer drogas à ela a qualquer momento?*/
	cout << "Alternativa 2" << endl;
	cout << "Evan diz que está tudo bem, desiste de voltar no tempo e vive com Jorge ao lado de sua amada" << endl;
	cout << "onde Jorge pode oferecer drogas à ela a qualquer momento?\n\n" << endl;
	
	cout << "Escolha uma opção" << endl;
	cout << "Digite 1 ou 2 " << endl;
	cin  >>  opcaoP2;
	system("clear");
	
	
	if(opcaoP2==1){
		
		/*Jorge nunca apareceu, porém Katy agora está sem o movimento
das pernas e de cadeira de rodas e o amigo que antes não tinha os movimentos, volta a andar
e Tomy que assassinou seus pais agora está solto.
Evan não acreditando no que está vendo, empurrando sua amada Katy de cadeira de rodas,
não podendo fazer as atividades que fazia na faculdade, e Tomy solto, resolve mais uma vez
voltar no tempo.
Evan pensativo, feliz pelo seu amigo, triste por sua amada, pega seu diário mais uma vez e:*/

        cout << "Jorge nunca apareceu, porém Katy agora está sem o movimento" << endl;
    	cout << "das pernas e de cadeira de rodas e o amigo que antes não tinha os movimentos, volta a andar" << endl;
     	cout << "e Tomy que assassinou seus pais agora está solto." << endl;
     	cout << "Evan não acreditando no que está vendo, empurrando sua amada Katy de cadeira de rodas," << endl; 
        cout << "não podendo fazer as atividades que fazia na faculdade, e Tomy solto, resolve mais uma vez" << endl;
    	cout << "voltar no tempo." << endl;
        cout << "Evan pensativo, feliz pelo seu amigo, triste por sua amada, pega seu diário mais uma vez e:\n\n" << endl;
     	
     	/*Opção 1: Evan volta no tempo para tentar tirar Katy da cadeira de rodas?
Opção 2: Evan aceita que sua amada está na cadeira de rodas e feliz por seu amigo ter voltado
a andar, porém não perdoa que Tomy tenha saído da prisão e com isto lendo então o seu
diário.*/
        cout << "Alternativa 1" << endl;
		cout << "Evan volta no tempo para tentar tirar Katy da cadeira de rodas?\n\n" << endl;

		cout << "Alternativa 2" << endl;
		cout << "Evan aceita que sua amada está na cadeira de rodas e feliz por seu amigo ter voltado" << endl;
		cout << "a andar, porém não perdoa que Tomy tenha saído da prisão\n\n" << endl;
		
		
		cout << "Escolha uma opção" << endl;
	    cout<< "Digite 1 ou 2 " << endl;
		cin>>opcaoP3;
	    system("clear");

		/*AMBAS OPÇÕES ACIMA TRÁS PARA CA: Evan apaga e retorna em seguida, Katy está novamente
andando, seu amigo andando também, porem Tomy está solto, Evan fica em fúria mata Tomy e é
preso, ficando novamente longe de sua amada.*/

		if (opcaoP3 == 1 || opcaoP3 == 2 ){
			cout << "Evan apaga e retorna em seguida, Katy está novamente" << endl;
			cout << "andando, seu amigo andando também, porem Tomy está solto, Evan fica em fúria, mata Tomy e é" << endl;
			cout << "preso, ficando novamente longe de sua amada.\n" << endl;
			cout << "\n\n Digite F em respeito"<<endl;		
	        cin >> pressione;
		    system("clear");
		    
		}
		else{
			cout <<"Opção inválida tente novamente";
		return 0;			
		}
			
			
			
		
	}
	else if(opcaoP2==2){
		
		/*Ao escolher essa alternativa: Jorge oferece drogas à Katy, Evan sabendo disso mata Jorge, Evan é preso
no mesmo presídio que o assassino de seus pais Tomy.*/

        cout << "Ao escolher essa alternativa: Jorge oferece drogas à Katy, Evan sabendo disso mata Jorge, Evan é preso" << endl;
	    cout << "no mesmo presídio que o assassino de seus pais Tomy.\n" << endl;
	    cout << "\n\n Digite R em respeito"<<endl;
				
	    cin >> pressione;
	    system("clear");
	    
     	
		
	}
	else{
		cout <<"Opção inválida tente novamente";
		return 0;
	}
	
	/*A PRISÃO DE EVAN
 Evan agora preso, distante de sua amada Katy e próximo do assassino de seus pais e apesar de
 suas boas intenções, as consequências são imprevisíveis. Além disso, o salvamento de dezenas
 de anos de novas memórias lhe causa danos cerebrais e hemorragias nasais graves. Em uma
 analise dentro da prisão, Evan percebe que suas tentativas de alterar o passado acaba só
 prejudicando aqueles que ele se preocupa, e pensa que a principal causa do sofrimento de
 todos em todas as diferentes linhas de tempo é ele mesmo.
 Evan dentro de sua cela, a única coisa que via a pedir era aos policiais que ao menos deixasse
 ele ficar com seu diário.

 Evan propositadamente viaja de volta no tempo, para o dia em que ele conhece sua amada
 pela primeira vez, ele intencionalmente perturba ela de modo em que ela nunca fosse afim
 dele e fazendo Katy se mudar para uma outra universidade.
 Evan acorda, está na faculdade, Tomy preso e seu amigo cadeirante. Oito anos mais tarde, em
 Itajai, Evan adulto passa por Katy na rua. Apesar de um breve olhar de reconhecimento passar
 pelo rosto de Katy, rapidamente desaparece quando ela vai embora sem falar com Evan,
 confirmando que ela não o conhecia. 
 FIM*/
	

	cout << "      A PRISÃO DE EVAN\n\n" << endl;
	 
	cout << "Evan agora preso, distante de sua amada Katy e próximo do assassino de seus pais e apesar de" << endl;
	cout << "suas boas intenções, as consequências são imprevisíveis. Além disso, o salvamento de dezenas" << endl;
	cout << "de anos de novas memórias lhe causa danos cerebrais e hemorragias nasais graves. Em uma" << endl;
	cout << "analise dentro da prisão, Evan percebe que suas tentativas de alterar o passado acaba só" << endl;
	cout << "prejudicando aqueles que ele se preocupa, e pensa que a principal causa do sofrimento de" << endl;
	cout << "todos em todas as diferentes linhas de tempo é ele mesmo.\n" << endl;

	cout << "\n\n Digite C para Continuar..."<< endl;
				
	cin >> pressione;
	system("clear");

	cout << "Evan dentro de sua cela, pede aos policiais que ao menos deixasse" << endl;
	cout << "ele ficar com seu diário." << endl;
	cout << "Evan com seu diário novamente: \n" << endl;

    cout << "Alternativa 1" << endl;
	cout << "Evan tem uma idéia para acabar com todos os sofrimentos feito por ele, que idéia é essa?\n\n" << endl;

	cout << "Alternativa 2" << endl;
	cout << "Evan continua preso e decide não voltar no tempo, mais uma surpresa acontece !! \n\n" << endl;

	cout << "Escolha uma opção" << endl;
	cout << "Digite 1 ou 2 " << endl;
	cin >> opcaoP4;
	system("clear");
		
	if(opcaoP4==2){

		/* Se o jogador escolher a opção 2, ele perde o jogo tendo que voltar ao inicio.  */

	cout << "Para sua surpresa, Evan voltou ao passado e iniciou o jogo novamente... Gamer Over kkkkkk." << endl;
	cout << "Inicie o jogo novamente. " << endl;
	return 0;
	}

	else if(opcaoP4==1){

	cout << "Evan propositadamente viaja de volta no tempo, para o dia em que ele conhece sua amada" << endl;
	cout << "pela primeira vez, ele intencionalmente perturba ela de modo em que ela nunca fosse afim" << endl;
	cout << "dele e fazendo Katy se mudar para uma outra universidade." << endl;
	}
	cout << "\n\n Digite V para viajar no tempo..." << endl;
				
	cin >> pressione;
	system("clear");


	cout << "Evan acorda, está na faculdade, Tomy preso e seu amigo cadeirante. Oito anos mais tarde, em" << endl;
	cout << "Itajaí, Evan adulto passa por Katy na rua. Apesar de um breve olhar de reconhecimento passar" << endl;
	cout << "pelo rosto de Katy, rapidamente desaparece quando ela vai embora sem falar com Evan," << endl;			
	cout << "confirmando que ela não o conhecia.\n\n" << endl;
	
	cout << "            FIM DE JOGO" << endl;

	cout << "\n\n Digite C para ver os Créditos." << endl;
				
	cin >> pressione;
	system("clear");
	
	cout << " Gratos por jogar Efeito Borboleta. Desenvolvido por Gustavo e Juliano." << endl;
	cout << " Trabalho de Algoritmos e Programação - Univali Itajaí" << endl;
	cout << " Ciência da Computação" << endl;
	cout << " Prof Cristina Otto" << endl;
		
		return 0;
	 
}
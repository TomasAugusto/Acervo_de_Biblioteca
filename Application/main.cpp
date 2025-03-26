
/*
Trabalho Final POO 1

Integrantes do Grupo

Felipe Alves Costa
Tom�s Augusto Oliveira Duarte

*/

#include <iostream>
#include <locale>
#include <algorithm>

#include "Livro.h"
#include "Cartazes.h"
#include "Periodico.h"
#include "TCC.h"
#include "Relatorio.h"
#include "Midia.h"
#include "Mapa.h"
#include "Acervo.h"
#include "Controledados.h"

Controledados *c = new Controledados();
vector <Acervo *> aux;
vector <string> autores;
string titulo, cidade, editora, anop, cdu, Assunto, tipo, autor, chave, isbn, isnn;
int nexemplares, edicao, numeropag;
vector <string> chaves;
float tamanhocm;
char opt ='0';
int ax = 2;	
Acervo *a;
int id = 1;	
int ax1;
int verifica = 0;
int posicao;



void visualizarl (vector <Acervo *> acervo){
		for (int i=0; i < acervo.size(); i++){
		if (acervo[i]->gettipo() == "Livro"  &&  acervo[i]->getstatus () == 1){
			cout << "ID: " << acervo[i]->getid() << "  T�tulo:  " << acervo[i]->gettitulo() << endl;
		}
	}
	cout << endl << endl;
}

void visualizarp (vector <Acervo *> acervo){
		for (int i=0; i < acervo.size(); i++){
		if ((acervo[i]->gettipo() == "Revista" ||  acervo[i]->gettipo() == "Jornal") && acervo[i]->getstatus () == 1 ){
			cout << "ID: " << acervo[i]->getid() << "  T�tulo:  " << acervo[i]->gettitulo() << endl;
		}
	}
	cout << endl << endl;
}

void visualizar (vector <Acervo *> acervo){
		for (int i=0; i < acervo.size(); i++){
			if (acervo[i]->getstatus() == 1){
				cout << "ID: " << acervo[i]->getid() << "  T�tulo:  " << acervo[i]->gettitulo() << endl;
			}
	}
	cout << endl << endl;
}

void visualizart (vector <Acervo *> acervo){
		for (int i=0; i < acervo.size(); i++){
		if ((acervo[i]->gettipo() == "Tese" ||  acervo[i]->gettipo() == "Monografia" ||  acervo[i]->gettipo() == "Disserta��o") && acervo[i]->getstatus () == 1 ){
			cout << "ID: " << acervo[i]->getid() << "  T�tulo:  " << acervo[i]->gettitulo() << endl;
		}
	}
	cout << endl << endl;	
}

void visualizarr (vector <Acervo *> acervo){
		for (int i=0; i < acervo.size(); i++){
		if (acervo[i]->gettipo() == "Relat�rio" && acervo[i]->getstatus ()== 1){
			cout << "ID: " << acervo[i]->getid() << "  T�tulo:  " << acervo[i]->gettitulo() << endl;
		}
	}
	cout << endl << endl;
}

void visualizarc (vector <Acervo *> acervo){
		for (int i=0; i < acervo.size(); i++){
		if (acervo[i]->gettipo() == "Cartaz" && acervo[i]->getstatus () == 1){
			cout << "ID: " << acervo[i]->getid() << "  T�tulo:  " << acervo[i]->gettitulo() << endl;
		}
	}
	cout << endl << endl;
}

void visualizarma (vector <Acervo *> acervo){
	for (int i=0; i < acervo.size(); i++){
		if (acervo[i]->gettipo() == "Mapa" && acervo[i]->getstatus () == 1 ){
			cout << "ID: " << acervo[i]->getid() << "  T�tulo:  " << acervo[i]->gettitulo() << endl;
		}
	}
	cout << endl << endl;
}

void visualizarmi (vector <Acervo *> acervo){
		for (int i=0; i < acervo.size(); i++){
		if ((acervo[i]->gettipo() == "Fita" ||  acervo[i]->gettipo() == "CD" ||  acervo[i]->gettipo() == "DVD" ||  acervo[i]->gettipo() == "VHS") && acervo[i]->getstatus () == 1  ){
			cout << "ID: " << acervo[i]->getid() << "  T�tulo:  " << acervo[i]->gettitulo() << endl;
		}
	}
	cout << endl << endl;
}

void cadlivro (vector <Acervo *> *acervo){
		cout << "  Cadastro de livros  " << endl << endl;
		cout << "Digite o nome do 1� autor:  ";
		getline (cin, autor);
		cin.clear();
		fflush (stdin);
		cout << endl;
		autores.push_back(autor);
		while (opt != 'N' && opt != 'n')
		{
			cout << "Deseja cadastrar mais um autor (S/N):  ";
			cin >> opt;
			cin.clear();
			fflush (stdin);
			cout << endl;
			
			if (opt == 'S' || opt == 's')
			{
				cout << "Digite o nome do " << ax << "� autor:  ";
				getline (cin, autor);
				cin.clear();
				fflush (stdin);
				cout << endl;
				autores.push_back(autor);
				ax++;		
			}
											
			if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
			{
					cout << "Op��o inv�lida." << endl;
			}
		}
		
		opt = '0';
		ax = 2;
										
		cout << "Digite o t�tulo do livro: ";
		getline (cin, titulo);
		cin.clear();
		fflush (stdin);
		cout << endl;
		do
		{
		cout << "Digite o n�mero da edi��o do livro: ";
		cin >> edicao;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (edicao <1)
		{
			cout << "Digite um n�mero de edi��o v�lido." << endl << endl;
		}
	}while (edicao <1);
										
	cout << "Digite a cidade: ";
	getline (cin, cidade);
	cin.clear();
	fflush (stdin);
	cout << endl;
	cout << "Digite o nome da editora do livro: ";
	getline (cin, editora);
	cin.clear();
	fflush (stdin);
	cout << endl;
	cout << "Digite o ano de publica��o do livro: ";
	getline (cin, anop);
	cin.clear();
	fflush (stdin);
	cout << endl;	
	
	do
	{
		cout << "Digite o CDU (13 caracteres): ";
		getline (cin, cdu);
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (cdu.length() != 13)
		{
			cout << "Entre com um CDU v�lido." << endl << endl;
		}
	}while (cdu.length() != 13);	
	cout << "Digite o Assunto do livro: ";
	getline (cin, Assunto);
	cin.clear();
	fflush (stdin);
	cout << endl;
	cout << "Digite a 1� palavra-chave:  ";
	getline (cin, chave);
	cin.clear();
	fflush (stdin);
	cout << endl;
	chaves.push_back(chave);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais uma palavra-chave (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome da " << ax << "� palavra-chave:  ";
			getline (cin, chave);
			cin.clear();
			fflush (stdin);
			cout << endl;
			chaves.push_back(chave);
			ax ++;	
		}			
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
	
	do
	{
		cout << "Digite o N� de exemplares:  ";
		cin >> nexemplares;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (nexemplares < 0)
		{
			cout << "Digite um n�mero v�lido." << endl << endl;
		}
		}while (nexemplares < 0);
		
		do
		{
			cout << "Digite N� de p�ginas:  ";
			cin >> numeropag;
			cin.clear();
			fflush (stdin);
			cout << endl;
			if (numeropag < 1)
			{
				cout << "Digite um n�mero v�lido." << endl << endl;
			}	
		}while (numeropag <1);
		
		do
		{	
			cout << "Digite o tamanho (cm) da p�gina:  ";
			cin >> tamanhocm;
			cin.clear();
			fflush (stdin);
			cout << endl;
			if (tamanhocm <0)
			{
				cout << "Digite um tamanho v�lido" << endl << endl;
			}
		}while (tamanhocm <0);
																			
		do
		{
			cout << "Digite o ISBN (13 caracteres): ";
			getline (cin, isbn);
			cin.clear();
			fflush (stdin);
			cout << endl;
			if (isbn.length()!= 13)
			{
				cout << "Entre com um ISBN v�lido." << endl << endl;
			}
		}while (isbn.length()!= 13);	
										
		a = new Livro (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag, chaves, tamanhocm, "Livro", id,  isbn,  1);
		acervo->push_back (a);
		id = id +1;
		aux = *(acervo);
		c->gravardados(aux);
										
		autores.clear();
		chaves.clear ();
										
		cout << "Livro cadastrado com sucesso." << endl << endl;
}

void cadperiodico (vector <Acervo *> *acervo){
	cout << "  Cadastro de peri�dicos  " << endl << endl;
	cout << "Digite o nome do 1� autor:  ";
	getline (cin, autor);
	cin.clear();
	fflush (stdin);
	cout << endl;
	autores.push_back(autor);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais um autor (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome do " << ax << "� autor:  ";
			getline (cin, autor);
			cin.clear();
			fflush (stdin);
			cout << endl;
			autores.push_back(autor);
			ax++;								
		}						
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
										
	cout << "Digite o t�tulo do peri�dico: ";
	getline (cin, titulo);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o n�mero da edi��o do peri�dico: ";
		cin >> edicao;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (edicao <1)
		{
			cout << "Digite um n�mero de edi��o v�lido." << endl << endl;
		}
	}while (edicao <1);
											
	cout << "Digite a cidade: ";
	getline (cin, cidade);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	cout << "Digite o nome da editora do peri�dico: ";
	getline (cin, editora);
	cin.clear();
	fflush (stdin);
	cout << endl;
																						
	cout << "Digite o ano de publica��o do peri�dico: ";
	getline (cin, anop);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o CDU (13 caracteres): ";
		getline (cin, cdu);
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (cdu.length() != 13)
		{
			cout << "Entre com um CDU v�lido." << endl << endl;
		}	
	}while (cdu.length() != 13);	
											
	cout << "Digite o Assunto do peri�dico: ";
	getline (cin, Assunto);
	cin.clear();
	fflush (stdin);
	cout << endl;
																						
	cout << "Digite a 1� palavra-chave:  ";
	getline (cin, chave);
	cin.clear();
	fflush (stdin);
	cout << endl;
	chaves.push_back(chave);
	while (opt != 'N' && opt != 'n');
	{
		cout << "Deseja cadastrar mais uma palavra-chave (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;										
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome da " << ax << "� palavra-chave:  ";
			getline (cin, chave);
			cin.clear();
			fflush (stdin);
			cout << endl;
			chaves.push_back(chave);
			ax ++;										
		}
												
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
																				
	do
	{
		cout << "Digite o N� de exemplares:  ";
		cin >> nexemplares;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (nexemplares < 0)
		{
			cout << "Digite um n�mero v�lido." << endl << endl;
		}
	}while (nexemplares < 0);
										
	do
	{										
		cout << "Digite N� de p�ginas:  ";
		cin >> numeropag;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (numeropag < 1)
		{
			cout << "Digite um n�mero v�lido." << endl << endl;
		}									
	}while (numeropag <1);
	
	do
	{	
		cout << "Digite o tamanho (cm) da p�gina:  ";
		cin >> tamanhocm;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (tamanhocm <0)
		{
			cout << "Digite um tamanho v�lido" << endl << endl;
		}
	}while (tamanhocm <0);
																													
	while (opt != 'R' && opt != 'r' &&  opt != 'j' && opt != 'J')
	{
		cout << "Digite o tipo de peri�dico (R - revista | J - jornal):   ";
		cin >> opt;
		cin.clear ();
		fflush (stdin);
		cout << endl;
										
		if (opt == 'R' || opt == 'r')
		{
			tipo = "Revista";
		}else if (opt == 'j' || opt == 'J')
		{
			tipo = "Jornal";
		}
		
		if (opt != 'R' && opt != 'r' &&  opt != 'j' && opt != 'J')
		{
			cout << "Op��o inv�lida." << endl << endl;
		}
	}	
											
	do
	{
		cout << "Digite o ISNN: ";
		getline (cin, isnn);
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (isnn.length()!= 9)
		{
			cout << "Entre com um ISNN v�lido." << endl << endl;
		}
	}while (isnn.length()!= 9);	
											
	a = new Periodico (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag, chaves, tamanhocm, tipo, id,  isnn, 1);
	acervo->push_back (a);
	autores.clear();
	chaves.clear ();
	opt = '0';
	id = id +1;
	aux = *(acervo);
	c->gravardados(aux);
	cout << "Peri�dico cadastrado com sucesso." << endl << endl;
}

void cadrelatorio (vector <Acervo *> *acervo){
	cout << "  Cadastro de relat�rios  " << endl << endl;
	cout << "Digite o nome do 1� autor:  ";
	getline (cin, autor);
	cin.clear();
	fflush (stdin);
	cout << endl;
	autores.push_back(autor);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais um autor (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
											
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome do " << ax << "� autor:  ";
			getline (cin, autor);
			cin.clear();
			fflush (stdin);
			cout << endl;
			autores.push_back(autor);
			ax++;									
		}
											
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
										
	cout << "Digite o t�tulo do relat�rio: ";
	getline (cin, titulo);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o n�mero da edi��o do relat�rio: ";
		cin >> edicao;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (edicao <1)
		{
			cout << "Digite um n�mero de edi��o v�lido." << endl << endl;
		}
	}while (edicao <1);
											
	cout << "Digite a cidade: ";
	getline (cin, cidade);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	cout << "Digite o nome da editora do relat�rio: ";
	getline (cin, editora);
	cin.clear();
	fflush (stdin);
	cout << endl;
																						
	cout << "Digite o ano de publica��o do relat�rio: ";
	getline (cin, anop);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o CDU (13 caracteres): ";
		getline (cin, cdu);
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (cdu.length() != 13)
		{
			cout << "Entre com um CDU v�lido." << endl << endl;
		}
	}while (cdu.length() != 13);	
											
	cout << "Digite o Assunto do relat�rio: ";
	getline (cin, Assunto);
	cin.clear();
	fflush (stdin);
	cout << endl;											
											
	cout << "Digite a 1� palavra-chave:  ";
	getline (cin, chave);
	cin.clear();
	fflush (stdin);
	cout << endl;
	chaves.push_back(chave);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais uma palavra-chave (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
												
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome da " << ax << "� palavra-chave:  ";
			getline (cin, chave);
			cin.clear();
			fflush (stdin);
			cout << endl;
			chaves.push_back(chave);
			ax ++;										
		}
												
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
																			
	do
	{
		cout << "Digite o N� de exemplares:  ";
		cin >> nexemplares;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (nexemplares < 0)
		{
			cout << "Digite um n�mero v�lido." << endl << endl;
		}
	}while (nexemplares < 0);
										
	do
	{
		cout << "Digite N� de p�ginas:  ";
		cin >> numeropag;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (numeropag < 1)
		{
			cout << "Digite um n�mero v�lido." << endl << endl;
		}	
	}while (numeropag <1);
										
	do
	{	
		cout << "Digite o tamanho (cm) da p�gina:  ";
		cin >> tamanhocm;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (tamanhocm <0)
		{
			cout << "Digite um tamanho v�lido" << endl << endl;
		}
	}while (tamanhocm <0);
									
	a = new Relatorio (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag, chaves, tamanhocm, "Relat�rio", id, 1);
	acervo->push_back (a);
	autores.clear();
	chaves.clear ();
	opt = '0';
	id = id +1;
	aux = *(acervo);
	c->gravardados(aux);
	cout << " Relat�rio cadastrado com sucesso. " << endl << endl;	
}

void cadcartaz (vector <Acervo *> *acervo){
	cout << "  Cadastro de cartazes " << endl << endl;
	cout << "Digite o nome do 1� autor:  ";
	getline (cin, autor);
	cin.clear();
	fflush (stdin);
	cout << endl;
	autores.push_back(autor);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais um autor (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
											
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome do " << ax << "� autor:  ";
			getline (cin, autor);
			cin.clear();
			fflush (stdin);
			cout << endl;
			autores.push_back(autor);
			ax++;									
		}
											
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
										
	cout << "Digite o t�tulo do cartaz: ";
	getline (cin, titulo);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o n�mero da edi��o do cartaz: ";
		cin >> edicao;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (edicao <1)
		{
			cout << "Digite um n�mero de edi��o v�lido." << endl << endl;
		}
	}while (edicao <1);
											
	cout << "Digite a cidade: ";
	getline (cin, cidade);
	cin.clear();
	fflush (stdin);
	cout << endl;

	cout << "Digite o nome da editora do cartaz: ";
	getline (cin, editora);
	cin.clear();
	fflush (stdin);
	cout << endl;										
												
	cout << "Digite o ano de publica��o do cartaz: ";
	getline (cin, anop);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o CDU (13 caracteres): ";
		getline (cin, cdu);
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (cdu.length() != 13)
		{
			cout << "Entre com um CDU v�lido." << endl << endl;
		}	
	}while (cdu.length() != 13);	
											
	cout << "Digite o Assunto do cartaz: ";
	getline (cin, Assunto);
	cin.clear();
	fflush (stdin);
	cout << endl;
																						
	cout << "Digite a 1� palavra-chave:  ";
	getline (cin, chave);
	cin.clear();
	fflush (stdin);
	cout << endl;
	chaves.push_back(chave);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais uma palavra-chave (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
												
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome da " << ax << "� palavra-chave:  ";
			getline (cin, chave);
			cin.clear();
			fflush (stdin);
			cout << endl;
			chaves.push_back(chave);
			ax ++;										
		}
												
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
																				
	do
	{
		cout << "Digite o N� de exemplares:  ";
		cin >> nexemplares;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (nexemplares < 0){
			cout << "Digite um n�mero v�lido." << endl << endl;
		}
	}while (nexemplares < 0);
										
	do
	{									
		cout << "Digite N� de p�ginas:  ";
		cin >> numeropag;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (numeropag < 1)
		{
			cout << "Digite um n�mero v�lido." << endl << endl;
		}									
	}while (numeropag <1);
	
	do
	{	
		cout << "Digite o tamanho (cm) da p�gina:  ";
		cin >> tamanhocm;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (tamanhocm <0)
		{
			cout << "Digite um tamanho v�lido" << endl << endl;
		}
	}while (tamanhocm <0);
										
	a = new Cartazes (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag, chaves, tamanhocm, "Cartaz", id, 1);
	acervo->push_back (a);
											
	opt = '0';
	id = id +1;
	aux = *(acervo);
	c->gravardados(aux);
											
	autores.clear();
	chaves.clear ();
	cout << " Cartaz cadastrado com sucesso. " << endl << endl;	
	
}

void cadtcc (vector <Acervo *> *acervo){
	cout << "  Cadastro de trabalhos de conclus�o  " << endl << endl;
	cout << "Digite o nome do 1� autor:  ";
	getline (cin, autor);
	cin.clear();
	fflush (stdin);
	cout << endl;
	autores.push_back(autor);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais um autor (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
											
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome do " << ax << "� autor:  ";
			getline (cin, autor);
			cin.clear();
			fflush (stdin);
			cout << endl;
			autores.push_back(autor);
			ax++;
		}
											
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
										
	cout << "Digite o t�tulo do TCC: ";
	getline (cin, titulo);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o n�mero da edi��o do TCC: ";
		cin >> edicao;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (edicao <1)
		{
			cout << "Digite um n�mero de edi��o v�lido." << endl << endl;
		}
	}while (edicao <1);
										
	cout << "Digite a cidade: ";
	getline (cin, cidade);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	cout << "Digite o nome da editora do TCC: ";
	getline (cin, editora);
	cin.clear();
	fflush (stdin);
	cout << endl;
																						
	cout << "Digite o ano de publica��o do TCC: ";
	getline (cin, anop);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o CDU (13 caracteres): ";
		getline (cin, cdu);
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (cdu.length() != 13)
		{
			cout << "Entre com um CDU v�lido." << endl << endl;
		}	
	}while (cdu.length() != 13);	
											
	cout << "Digite o Assunto do TCC ";
	getline (cin, Assunto);
	cin.clear();
	fflush (stdin);
	cout << endl;
																		
	cout << "Digite a 1� palavra-chave:  ";
	getline (cin, chave);
	cin.clear();
	fflush (stdin);
	cout << endl;
	chaves.push_back(chave);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais uma palavra-chave (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
												
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome da " << ax << "� palavra-chave:  ";
			getline (cin, chave);
			cin.clear();
			fflush (stdin);
			cout << endl;
			chaves.push_back(chave);
			ax ++;											
		}
												
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
																					
	do
	{
		cout << "Digite o N� de exemplares:  ";
		cin >> nexemplares;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (nexemplares < 0)
		{
			cout << "Digite um n�mero v�lido." << endl << endl;
		}
	}while (nexemplares < 0);
										
	do
	{								
		cout << "Digite N� de p�ginas:  ";
		cin >> numeropag;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (numeropag < 1)
		{
			cout << "Digite um n�mero v�lido." << endl << endl;
		}									
	}while (numeropag <1);
	
	do
	{	
		cout << "Digite o tamanho (cm) da p�gina:  ";
		cin >> tamanhocm;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (tamanhocm <0)
		{
			cout << "Digite um tamanho v�lido" << endl << endl;
		}
	}while (tamanhocm <0);
												
	while (opt != 'M' && opt != 'm' &&  opt != 'd' && opt != 'D' &&  opt != 'T' && opt != 't')
	{
		cout << "Digite o tipo de Trabalho de conclus�o (T - tese | M - monografia | D - disserta��o ):   ";
		cin >> opt;
		cin.clear ();
		fflush (stdin);
		cout << endl;
												
		if (opt == 'M' || opt == 'm')
		{									
			tipo = "Monografia";
		}else if (opt == 'd' || opt == 'D')
		{
			tipo = "Disserta��o";
		}else if (opt == 't' || opt == 'T')
		{
			tipo = "Tese";
		}
		if (opt != 'M' && opt != 'm' &&  opt != 'd' && opt != 'D' &&  opt != 'T' && opt != 't')
		{
			cout << "Op��o inv�lida." << endl << endl;
		}
	}	
															
	a = new TCC (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag, chaves, tamanhocm, tipo, id, 1);
	acervo->push_back (a);
	autores.clear();
	chaves.clear ();
	opt = '0';
	id = id +1;
	aux = *(acervo);
	c->gravardados(aux);
	cout << " Trabalho de conclus�o cadastrado com sucesso. " << endl << endl;	
}

void cadmapa(vector <Acervo *> *acervo){
	cout << "  Cadastro de mapas  " << endl << endl;
	cout << "Digite o nome do 1� autor:  ";
	getline (cin, autor);
	cin.clear();
	fflush (stdin);
	cout << endl;
	autores.push_back(autor);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais um autor (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
											
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome do " << ax << "� autor:  ";
			getline (cin, autor);
			cin.clear();
			fflush (stdin);
			cout << endl;
			autores.push_back(autor);
			ax++;
		}
											
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
										
	cout << "Digite o t�tulo do mapa: ";
	getline (cin, titulo);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o n�mero da edi��o do mapa: ";
		cin >> edicao;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (edicao <1)
		{
			cout << "Digite um n�mero de edi��o v�lido." << endl << endl;
		}
	}while (edicao <1);
											
	cout << "Digite a cidade: ";
	getline (cin, cidade);
	cin.clear();
	fflush (stdin);
	cout << endl;
	
	cout << "Digite o nome da editora do mapa: ";
	getline (cin, editora);
	cin.clear();
	fflush (stdin);
	cout << endl;
		
	cout << "Digite o ano de publica��o do mapa: ";
	getline (cin, anop);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o CDU (13 caracteres): ";
		getline (cin, cdu);
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (cdu.length() != 13)
		{
			cout << "Entre com um CDU v�lido." << endl << endl;
		}
	}while (cdu.length() != 13);	
	
	cout << "Digite o Assunto do mapa: ";
	getline (cin, Assunto);
	cin.clear();
	fflush (stdin);
	cout << endl;
												
	cout << "Digite a 1� palavra-chave:  ";
	getline (cin, chave);
	cin.clear();
	fflush (stdin);
	cout << endl;
	chaves.push_back(chave);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais uma palavra-chave (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
		
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome da " << ax << "� palavra-chave:  ";
			getline (cin, chave);
			cin.clear();
			fflush (stdin);
			cout << endl;
			chaves.push_back(chave);
			ax ++;
		}
										
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
														
	do{
		cout << "Digite o N� de exemplares:  ";
		cin >> nexemplares;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (nexemplares < 0)
		{
			cout << "Digite um n�mero v�lido." << endl << endl;
		}
	}while (nexemplares < 0);
			
	do
	{			
		cout << "Digite N� de p�ginas:  ";
		cin >> numeropag;
	    cin.clear();
		fflush (stdin);
		cout << endl;
		if (numeropag < 1){
			cout << "Digite um n�mero v�lido." << endl << endl;
		}
	}while (numeropag <1);
	
	do
	{	
		cout << "Digite o tamanho (cm) da p�gina:  ";
		cin >> tamanhocm;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (tamanhocm <0)
		{
			cout << "Digite um tamanho v�lido" << endl << endl;
		}
	}while (tamanhocm <0);
													
	a = new Mapa (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag, chaves, tamanhocm, "Mapa", id, 1);
	acervo->push_back (a);
	autores.clear();
	chaves.clear ();
	opt = '0';
	id = id +1;
	aux = *(acervo);
	c->gravardados(aux);
	cout << "   Mapa cadastrado com sucesso. " << endl << endl;	
}

void cadmidia (vector <Acervo *> *acervo){
	cout << "  Cadastro de m�dias  " << endl << endl;
	cout << "Digite o nome do 1� autor:  ";
	getline (cin, autor);
	cin.clear();
	fflush (stdin);
	cout << endl;
	autores.push_back(autor);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais um autor (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome do " << ax << "� autor:  ";
			getline (cin, autor);
			cin.clear();
			fflush (stdin);
			cout << endl;
			autores.push_back(autor);
			ax++;
		}
											
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
										
	cout << "Digite o t�tulo do m�dia: ";
	getline (cin, titulo);
	cin.clear();
	fflush (stdin);
	cout << endl;
	
	do
	{
		cout << "Digite o n�mero da edi��o da m�dia: ";
		cin >> edicao;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (edicao <1)
		{
			cout << "Digite um n�mero de edi��o v�lido." << endl << endl;
		}
	}while (edicao <1);
											
	cout << "Digite a cidade: ";
	getline (cin, cidade);
	cin.clear();
	fflush (stdin);
	cout << endl;
	
	cout << "Digite o nome da editora do m�dia: ";
	getline (cin, editora);
	cin.clear();
	fflush (stdin);
	cout << endl;
	
		
	cout << "Digite o ano de publica��o do m�dia: ";
	getline (cin, anop);
	cin.clear();
	fflush (stdin);
	cout << endl;
											
	do
	{
		cout << "Digite o CDU (13 caracteres): ";
		getline (cin, cdu);
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (cdu.length() != 13)
		{
			cout << "Entre com um CDU v�lido." << endl << endl;
		}
	}while (cdu.length() != 13);	
											
	cout << "Digite o Assunto do m�dia: ";
	getline (cin, Assunto);
	cin.clear();
	fflush (stdin);
	cout << endl;
		
	
	cout << "Digite a 1� palavra-chave:  ";
	getline (cin, chave);
	cin.clear();
	fflush (stdin);
	cout << endl;
	chaves.push_back(chave);
	while (opt != 'N' && opt != 'n')
	{
		cout << "Deseja cadastrar mais uma palavra-chave (S/N):  ";
		cin >> opt;
		cin.clear();
		fflush (stdin);
		cout << endl;
		
		if (opt == 'S' || opt == 's')
		{
			cout << "Digite o nome da " << ax << "� palavra-chave:  ";
			getline (cin, chave);
			cin.clear();
			fflush (stdin);
			cout << endl;
			chaves.push_back(chave);
			ax ++;
			
		}
												
		if (opt != 'N' && opt != 'n' && opt != 'S' && opt != 's')
		{
			cout << "Op��o inv�lida." << endl;
		}
	}
	
	opt = '0';
	ax = 2;
											
	do
	{
		cout << "Digite o N� de exemplares:  ";
		cin >> nexemplares;
		cin.clear();
		fflush (stdin);
		cout << endl;
		if (nexemplares < 0)
		{
			cout << "Digite um n�mero v�lido." << endl << endl;
		}
	}while (nexemplares < 0);
											
	while (opt != 'F' && opt != 'f' &&  opt != 'V' && opt != 'v' &&  opt != 'C' && opt != 'c' &&  opt != 'D' && opt != 'd')
	{
		cout << "Digite o tipo de m�dia (F - fita | V - VHS | D - DVD | C - CD ):   ";
		cin >> opt;
		cin.clear ();
		fflush (stdin);
		cout << endl;
		
		if (opt == 'F' || opt == 'f')
		{			
			tipo = "Fita";
		}else if (opt == 'd' || opt == 'D')
		{
			tipo = "DVD";
		}else if (opt == 'v' || opt == 'V')
		{
			tipo = "VHS";
		}else if (opt == 'c' || opt == 'C')
		{
			tipo = "CD";
		}
		if (opt != 'F' && opt != 'f' &&  opt != 'V' && opt != 'v' &&  opt != 'C' && opt != 'c' &&  opt != 'D' && opt != 'd')
		{
			cout << "Op��o inv�lida." << endl << endl;
		}
	}	
															
	a = new Midia (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, 0 , chaves, 0, tipo, id, 1);
	acervo->push_back (a);
	autores.clear();
	chaves.clear ();
	opt = '0';
	id = id +1;
	aux = *(acervo);
	c->gravardados(aux);			
	cout << " M�dia cadastrada com sucesso. " << endl << endl;	
}

bool ordena_por_id (Acervo *A, Acervo *B){
	if (A->getid() < B->getid())
	{
		return true;
	}
	return false;
}

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	system("chcp 1252 > nul");

	vector <Acervo *> acervo;
	
	acervo = c->lerdados();
	
	sort (acervo.begin(), acervo.end(), ordena_por_id);
	
	if (acervo.size()==0)
	{
		id = 1;
	}else
	{
		id = acervo [acervo.size()-1]->getid() +1;  
	}
	
	int option = 0;
	int option1 = 0;
	int option2 = 0;
	int option3 = 0;
	int option4 = 0;
	int option5 = 0;
	int option6 = 0;
	int option7 = 0;
	int option8 = 0;
	int option9 = 0;
		
	do
	{
		cout << "              Biblioteca Universitaria          " << endl;
		cout << "1. Empr�stimo de itens." << endl;
		cout << "2. Pesquisar informa��es do item." << endl;
		cout << "3. Fornecer ficha catalogr�fica." << endl; 
		cout << "4. Cadastrar, remover ou alterar itens." << endl;
		cout << "5. Sair." << endl;
		cout << "Digite uma op��o v�lida:  ";
		cin >> option;
		cin.clear();
		fflush (stdin);
		cout << endl << endl;
		switch (option)
		{

			case 1:
			do
			{
				cout << "              Biblioteca Universitaria              " << endl;
				cout << "1. Mostrar itens do acervo." << endl;
				cout << "2. Empr�stimo de itens por ID." << endl;
				cout << "3. Voltar ao menu principal." << endl;
				cout << "Digite uma op��o v�lida:  ";
				cin >> option8;
				cin.clear();
				fflush (stdin);
				cout << endl << endl;
				switch (option8)
				{
					case 1:
					{
						do
						{
							cout << "              Biblioteca Universitaria              " << endl;
							cout << "1. Mostrar todos os itens do acervo." << endl;
							cout << "2. Mostrar livros." << endl;
		                    cout << "3. Mostrar Peri�dicos." << endl;
				            cout << "4. Mostrar Relat�rios." << endl;
							cout << "5. Mostrar Cartazes." << endl;
							cout << "6. Mostrar TCC." << endl;
							cout << "7. Mostrar Mapas." << endl;
							cout << "8. Mostrar M�dias." << endl;
							cout << "9. Voltar ao menu anterior." << endl;
							cout << "Digite uma op��o v�lida:  ";
							cin >> option9;
							cin.clear();
							cout << endl << endl;
							
							switch (option9)
							{	
								case 1:{
									if (acervo.size() == 0)
									{
										cout << "N�o h� nehum item no acervo." << endl << endl;
										break;
									}else{
										visualizar (acervo);
										break;
									}	
								}
										
								case 2:{
									if (acervo.size() == 0)
									{
										cout << "N�o h� nehum item no acervo." << endl << endl;
										break;
									}else
									{
										visualizarl (acervo);
										break;
									}		
								}
								
								case 3:
								{
									if (acervo.size() == 0)
									{
										cout << "N�o h� nehum item no acervo." << endl << endl;
										break;
									}else
									{
										visualizarp (acervo);
										break;
									}	
								}
										
								case 4:
								{
									if (acervo.size() == 0)
									{
										cout << "N�o h� nehum item no acervo." << endl << endl;
										break;
									}else
									{
										visualizarr (acervo);
										break;
									}	
								}
								
								case 5:
								{
									if (acervo.size() == 0)
									{
										cout << "N�o h� nehum item no acervo." << endl << endl;
										break;
									}else
									{
										visualizarc (acervo);
										break;
									}		
								}
								
								case 6:
								{
									if (acervo.size() == 0)
									{
										cout << "N�o h� nehum item no acervo." << endl << endl;
										break;
									}else
									{
										visualizart (acervo);
										break;
									}	
								}
										
								case 7:
								{
									if (acervo.size() == 0)
									{
										cout << "N�o h� nehum item no acervo." << endl << endl;
										break;
									}else
									{
										visualizarma (acervo);
										break;
									}
								}
								
								case 8:
								{
									if (acervo.size() == 0)
									{
										cout << "N�o h� nehum item no acervo." << endl << endl;
										break;
									}else
									{
										visualizarmi (acervo);
										break;
									}
								}
										
								case 9:
								{
									break;
								}
								default:
								{
									cout << "Op��o inv�lida, por favor digite uma op��o v�lida." << endl << endl;
									break;
								}
							}
									
						}while (option9!=9);
						break;
					}
					
					case 2:
					{
						cout << "              Biblioteca Universitaria              " << endl;
						cout << "Entre com o id do item a ser emprestado:  ";
						cin >> ax1;
						cin.clear ();
						fflush (stdin);
						cout << endl << endl;
						for (int i=0; i<acervo.size(); i++)
						{
							if (acervo[i]->getid() == ax1 && acervo[i]->getstatus () == 1)
							{
								verifica =1;
								posicao = i;	
							}
						}
		
						if (verifica !=1 || acervo[posicao]->getstatus()==0)
						{
							cout << "Item n�o encontrado." << endl << endl;
							break;
						}else
						{
							if  (acervo[posicao]->getnexemplares() == 0)
							{
								cout << "N�o h� exemplares deste item na biblioteca no momento." << endl << endl;
								verifica = 0;
								break;
							}
							cout << acervo[posicao]->gettitulo() << " - " << acervo[posicao]->gettipo() << " - foi emprestado com sucesso." << endl << endl;
							acervo[posicao]->setnexemplares(acervo[posicao]->getnexemplares()-1);
							verifica =0;
							break;
						}
								
						}
						case 3:
						{
							break;
						}
						
						default:
						{
							cout << "Op��o inv�lida, por favor digite uma op��o v�lida." << endl << endl;
							break;
						}
					}	
				}while (option8!=3);
				break;
				
			case 2:
				do
				{
					cout << "              Biblioteca Universitaria              " << endl;
					cout << "1. Mostrar itens do acervo." << endl;
					cout << "2. Pesquisar informa��es do item." << endl;
					cout << "3. Voltar ao menu principal." << endl;
					cout << "Digite uma op��o v�lida:  ";
					cin >> option6;
					cin.clear();
					fflush (stdin);
					cout << endl << endl;
					switch (option6)
					{
						case 1:
						{
							do
							{
								cout << "              Biblioteca Universitaria              " << endl;
								cout << "1. Mostrar todos os itens do acervo." << endl;
								cout << "2. Mostrar livros." << endl;
			                    cout << "3. Mostrar Peri�dicos." << endl;
					            cout << "4. Mostrar Relat�rios." << endl;
								cout << "5. Mostrar Cartazes." << endl;
								cout << "6. Mostrar TCC." << endl;
								cout << "7. Mostrar Mapas." << endl;
								cout << "8. Mostrar M�dias." << endl;
								cout << "9. Voltar ao menu anterior." << endl;
								cout << "Digite uma op��o v�lida:  ";
								cin >> option7;
								cin.clear();
								cout << endl << endl;
									
								switch (option7)
								{
									case 1:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizar (acervo);
											break;
										}	
									}
										
									case 2:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarl (acervo);
											break;
										}
									}
										
									case 3:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarp (acervo);
											break;
										}	
									}
									
									case 4:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarr (acervo);
											break;
										}	
									}
									
									case 5:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarc (acervo);
											break;
										}		
									}
										
									case 6:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizart (acervo);
											break;
										}
									}
										
									case 7:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarma (acervo);
											break;
										}
									}
										
									case 8:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarmi (acervo);
											break;
										}
									}
									
									case 9:
									{
										break;
									}
									default:
									{
										cout << "Op��o inv�lida, por favor digite uma op��o v�lida." << endl << endl;
										break;
									}
								}	
							}while (option7!=9);
							break;
						}
						
						case 2:
						{
							cout << "              Biblioteca Universitaria              " << endl;
							cout << "Entre com o id do item a ser pesquisado:  ";
							cin >> ax1;
							cin.clear();
							fflush (stdin);
							cout << endl << endl;
							for (int i=0; i<acervo.size(); i++)
							{
								if (acervo[i]->getid() == ax1 && acervo[i]->getstatus () == 1)
								{
									verifica =1;
									posicao = i;
								}
							}
			
							if (verifica !=1 || acervo[posicao]->getstatus()==0)
							{
								cout << "Item n�o encontrado." << endl << endl;
								break;
							}else
							{
								acervo[posicao]->getinfo();
								cout << endl;
								verifica =0;
								break;
								
							}	
						}
						
						case 3:
						{
							break;
						}
						
						default:
						{
							cout << "Op��o inv�lida, por favor digite uma op��o v�lida." << endl << endl;
							break;
						}
					}
				}while (option6!=3);
				break;
			
			case 3:
				do
				{
					cout << "              Biblioteca Universitaria              " << endl;
					cout << "1. Mostrar itens do acervo." << endl;
					cout << "2. Fornecer ficha catalogr�fica do item." << endl;
					cout << "3. Voltar ao menu principal." << endl;
					cout << "Digite uma op��o v�lida:  ";
					cin >> option4;
					cin.clear();
					fflush (stdin);
					cout << endl << endl;
					switch (option4)
					{
						case 1:
						{
							do
							{
								cout << "              Biblioteca Universitaria              " << endl;
								cout << "1. Mostrar todos os itens do acervo." << endl;
								cout << "2. Mostrar livros." << endl;
			                    cout << "3. Mostrar Peri�dicos." << endl;
					            cout << "4. Mostrar Relat�rios." << endl;
								cout << "5. Mostrar Cartazes." << endl;
								cout << "6. Mostrar TCC." << endl;
								cout << "7. Mostrar Mapas." << endl;
								cout << "8. Mostrar M�dias." << endl;
								cout << "9. Voltar ao menu anterior." << endl;
								cout << "Digite uma op��o v�lida:  ";
								cin >> option5;
								cin.clear();
								cout << endl << endl;
									
								switch (option5)
								{
									case 1:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizar (acervo);
											break;
										}
									}
										
										
									case 2:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarl (acervo);
											break;
										}
									}
									
									case 3:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarp (acervo);
											break;
										}
									}
									
									case 4:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarr (acervo);
											break;
										}	
									}
										
									case 5:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarc (acervo);
											break;
										}		
									}
										
									case 6:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizart (acervo);
											break;
										}	
									}
										
									case 7:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarma (acervo);
											break;
										}
									}
										
									case 8:
									{
										if (acervo.size() == 0)
										{
											cout << "N�o h� nehum item no acervo." << endl << endl;
											break;
										}else
										{
											visualizarmi (acervo);
											break;
										}
									}
										
									case 9:
									{
										break;
									}
									default:
									{
										cout << "Op��o inv�lida, por favor digite uma op��o v�lida." << endl << endl;
										break;
									}
								}	
							}while (option5!=9);
							break;
						}
						
						case 2:
						{
							cout << "              Biblioteca Universitaria              " << endl;
							cout << "Entre com id do item:  ";
							cin >> ax1;
							cin.clear();
							fflush (stdin);
							cout << endl << endl;
							
							for (int i=0; i<acervo.size(); i++)
							{
								if (acervo[i]->getid() == ax1 && acervo[i]->getstatus () == 1)
								{
									verifica =1;
									posicao = i;
								}	
							}
							
							if (verifica !=1 || acervo[posicao]->getstatus()==0)
							{
								cout << "Item n�o encontrado." << endl << endl;
								break;
							}else
							{
								acervo[posicao]->catalografica();
								verifica = 0;
								break;	
							}	
						}
						
						case 3:
						{
							break;
						}
						
						default:
						{
							cout << "Op��o inv�lida, por favor digite uma op��o v�lida." << endl << endl;
							break;
						}
					}		
				}while (option4!=3);
				break;
				
			case 4:
					do
					{
						cout << "              Biblioteca Universitaria              " << endl;
						cout << "1. Mostrar itens do acervo." << endl;
						cout << "2. Cadastrar item." << endl;
						cout << "3. Alterar item." << endl;
						cout << "4. Deletar item." << endl;
						cout << "5. Voltar ao menu principal." << endl;
						cout << "Digite uma op��o v�lida:  ";
						cin >> option1;
						cin.clear();
						fflush (stdin);
						cout << endl << endl;
						
						switch (option1)
						{
							case 1:
								do
								{
									cout << "              Biblioteca Universitaria              " << endl;
									cout << "1. Mostrar todos os itens do acervo." << endl;
									cout << "2. Mostrar livros." << endl;
				                    cout << "3. Mostrar Peri�dicos." << endl;
						            cout << "4. Mostrar Relat�rios." << endl;
									cout << "5. Mostrar Cartazes." << endl;
									cout << "6. Mostrar TCC." << endl;
									cout << "7. Mostrar Mapas." << endl;
									cout << "8. Mostrar M�dias." << endl;
									cout << "9. Voltar ao menu anterior." << endl;
									cout << "Digite uma op��o v�lida:  ";
									cin >> option2;
									cin.clear();
									cout << endl << endl;
									
									switch (option2)
									{
										case 1:
										{
											if (acervo.size() == 0)
											{
												cout << "N�o h� nenhum item no acervo." << endl << endl;
												break;
											}else
											{
												visualizar (acervo);
												break;
											}	
										}
										
										case 2:
										{
											if (acervo.size() == 0)
											{
												cout << "N�o h� nenhum item no acervo." << endl << endl;
												break;
											}else
											{
												visualizarl (acervo);
												break;
											}
										}
										
										case 3:
										{
											if (acervo.size() == 0)
											{
												cout << "N�o h� nenhum item no acervo." << endl << endl;
												break;
											}else
											{
												visualizarp (acervo);
												break;
											}
										}
										
										case 4:
										{
											if (acervo.size() == 0)
											{
												cout << "N�o h� nenhum item no acervo." << endl << endl;
												break;
											}else
											{
												visualizarr (acervo);
												break;
											}
										}
										
										case 5:
										{
											if (acervo.size() == 0)
											{
												cout << "N�o h� nenhum item no acervo." << endl << endl;
												break;
											}else
											{
												visualizarc (acervo);
												break;
											}	
										}
										
										case 6:
										{
											if (acervo.size() == 0)
											{
												cout << "N�o h� nenhum item no acervo." << endl << endl;
												break;
											}else
											{
												visualizart (acervo);
												break;
											}
										}
										
										case 7:
										{
											if (acervo.size() == 0)
											{
												cout << "N�o h� nenhum item no acervo." << endl << endl;
												break;
											}else
											{
												visualizarma (acervo);
												break;
											}
										}
										
										case 8:
										{
											if (acervo.size() == 0)
											{
												cout << "N�o h� nenhum item no acervo." << endl << endl;
												break;
											}else
											{
												visualizarmi (acervo);
												break;
											}
										}
										
										case 9:
										{
											break;
										}
										
										default:
										{
											cout << "Op��o inv�lida. Por favor digite uma op��o v�lida." << endl << endl;
											break;
										}
									}	
								}while (option2!=9);
							break;
							
							case 2:
								do
								{
									cout << "              Biblioteca Universitaria              " << endl;
									cout << "1. Cadastrar livros." << endl;
				                    cout << "2. Cadastrar Peri�dicos." << endl;
						            cout << "3. Cadastrar Relat�rios." << endl;
									cout << "4. Cadastrar Cartazes." << endl;
									cout << "5. Cadastrar TCC." << endl;
									cout << "6. Cadastrar Mapas." << endl;
									cout << "7. Cadastrar M�dias." << endl;
									cout << "8. Voltar ao menu anterior." << endl;
									cout << "Digite uma op��o v�lida:  ";
									cin >> option3;
									cin.clear();
									fflush (stdin);
									cout << endl << endl;
										
									switch (option3)
									{
										case 1:
										{
											cadlivro (&acervo);
											cout << endl << endl;
											break;
										}
		
										case 2:
										{
											cadperiodico (&acervo);
											cout << endl << endl;
											break;						
										}
											
										case 3:
										{
											cadrelatorio (&acervo);
											cout << endl << endl;
											break;
										}
											
										case 4:
										{
											cadcartaz (&acervo);
											cout << endl << endl;
											break;
										}
											
										case 5:
										{
											cadtcc (&acervo);
											cout << endl << endl;
											break;
										}
										
										case 6:
										{	
											cadmapa (&acervo);
											cout << endl << endl;
											break;
										}
										
										case 7:
										{
											cadmidia (&acervo);
											cout << endl << endl;
											break;
										}
										
										case 8:
										{
											break;
										}
										
										default:
										{
											cout << "Op��o inv�lida, por favor digite uma op��o v�lida." << endl << endl;
											break;
										}
									}
											
								}while (option3!=8);
							break;
							
							case 3:
								cout << "              Biblioteca Universitaria              " << endl;
								cout << "Entre com o id do item:  ";
								cin >> ax1;
								cin.clear();
								fflush (stdin);
								cout << endl;
								for (int i=0; i < acervo.size(); i++)
								{
									if (acervo[i]->getid () == ax1 && acervo[i]->getstatus () == 1)
									{
										verifica =1;
										posicao = i;
									}
								}
								
								if (verifica!=1 || acervo[posicao]->getstatus()==0)
								{
									cout << "Item n�o encontrado." << endl << endl;
									break;
								}else
								{ 
									cout << "Item " << acervo[posicao]->gettitulo() << " Encontrado." << endl;
									tipo = acervo[posicao]->gettipo();
										
									do
									{
										cout << "Deseja mesmo alterar este item (S/N):  ";
										cin >> opt;
										cin.clear();
										fflush (stdin);
										cout << endl;
										
										if (opt != 'n' && opt != 'N' && opt != 'S' && opt != 's')
										{
											cout << "Op��o inv�lida." << endl << endl;
										}
									}while (opt != 'n' && opt != 'N' && opt != 'S' && opt != 's');	
									
									if (opt == 's' || opt == 'S')
									{
										if (tipo == "Livro")
										{
											cadlivro (&acervo);
											acervo[posicao] = acervo[acervo.size() - 1];
											acervo[posicao]->setid (ax1);
											acervo.pop_back();
											c->gravardados(acervo);
											opt = '0';
											id = id -1;
											verifica = 0;
											break;
										}else if (tipo == "Jornal" || tipo == "Revista")
										{
											cadperiodico (&acervo);
											acervo[posicao] = acervo[acervo.size() - 1];
											acervo[posicao]->setid (ax1);
											acervo.pop_back();
											c->gravardados(acervo);
											opt = '0';
											id = id -1;
											verifica = 0;
											break;
										}else if (tipo == "Relat�rio")
										{
											cadrelatorio (&acervo);
											acervo[posicao] = acervo[acervo.size() - 1];
											acervo[posicao]->setid (ax1);
											acervo.pop_back();
											c->gravardados(acervo);
											opt = '0';
											id = id -1;
											verifica = 0;
											break;
										}else if (tipo == "Cartaz" )
										{
											cadcartaz (&acervo);
											acervo[posicao] = acervo[acervo.size() - 1];
											acervo[posicao]->setid (ax1);
											acervo.pop_back();
											c->gravardados(acervo);
											opt = '0';
											id = id -1;
											verifica = 0;
											break;
										}else if (tipo == "Tese" || tipo == "Monografia" || tipo == "Disserta��o")
										{
											cadtcc (&acervo);
											acervo[posicao] = acervo[acervo.size() - 1];
											acervo[posicao]->setid (ax1);
											acervo.pop_back();
											c->gravardados(acervo);
											opt = '0';
											id = id -1;
											verifica = 0;
											break;
										}else if (tipo == "Mapa" )
										{
											cadmapa(&acervo);
											acervo[posicao] = acervo[acervo.size() - 1];
											acervo[posicao]->setid (ax1);
											acervo.pop_back();
											opt = '0';
											c->gravardados(acervo);
											id = id -1;
											verifica = 0;
											break;
										}else if (tipo == "Fita" || tipo == "VHS" || tipo == "CD" || tipo == "DVD")
										{
											cadmidia (&acervo);
											acervo[posicao] = acervo[acervo.size() - 1];
											acervo[posicao]->setid (ax1);
											acervo.pop_back();
											c->gravardados(acervo);
											opt = '0';
											id = id -1;
											verifica = 0;
											break;
										}	
									}else
									{
										verifica = 0;
										break;
									}
								}
								
							case 4:
								cout << "              Biblioteca Universitaria              " << endl;
								cout << "Entre com o id do item a ser removido:  ";
								cin >> ax1;
								cin.clear();
								fflush (stdin);
								cout << endl;
								for (int i=0; i < acervo.size(); i++)
								{
										if (acervo[i]->getid () == ax1 && acervo[i]->getstatus () == 1)
										{
											verifica =1;
											posicao = i;
										}	
								}
								
								if (verifica!=1 || acervo[posicao]->getstatus()==0)
								{
									cout << "Item n�o encontrado." << endl << endl;
									break;
								}else
								{
									cout << "Item " << acervo[posicao]->gettitulo() << " Encontrado." << endl;
									tipo = acervo[posicao]->gettipo();
		
									do
									{
										cout << "Deseja mesmo remover este item (S/N):  ";
										cin >> opt;
										cin.clear();
										fflush (stdin);
										cout << endl;
										
										if (opt != 'n' && opt != 'N' && opt != 'S' && opt != 's')
										{
											cout << "Op��o inv�lida." << endl << endl;
										}
									}while (opt != 'n' && opt != 'N' && opt != 'S' && opt != 's');	
									
									if (opt == 's' || opt == 'S')
									{
											acervo[posicao]->setstatus (0);
											c->gravardados(acervo);
											opt = '0';
											verifica = 0;
											break;
									}else
									{
										verifica = 0;
										break;
									}
								}
			
							case 5:
								break;	
								
							default:
								cout << "Op��o inv�lida, por favor digite uma op��o v�lida." << endl << endl;
								break;			 
						}
					}while (option1 != 5);		
				break;
				
			case 5:
				break;
			default: 
			{
				cout << "Op��o inv�lida, por favor digite uma op��o v�lida." << endl << endl;
				break;
			}
		}	
	}while (option !=5);	
	
	for (int i=0; i<acervo.size(); i++)
	{	
		acervo[i]->clear();
	}
	
	delete c;
	c = NULL;
	acervo.clear();

	return 0;
	
}



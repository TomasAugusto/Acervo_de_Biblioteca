#include "TCC.h"

TCC::TCC(vector <string> autor, string titulo, int edicao, string cidade, string editora, string anop, string cdu, string Assunto, int nexemplares, int numeropag, vector <string> chave, float tamanhocm, string tipo, int id, int status) : Acervo (autor, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag, chave, tamanhocm, tipo, id, status)

{
}

TCC::~TCC()
{
}

void TCC::getinfo(){
	cout << "Tipo:  " << gettipo() << endl;
	cout << "ID:  " << getid() << endl;
	getautores();
	cout << "Título:  " << gettitulo() << endl;
	cout << "Edição:  " << getedicao () << "°" << endl;
	cout << "Cidade:  " << getcidade () << endl;
	cout << "Editora:  " << geteditora()<< endl; 
	cout << "Ano de publicação:  " << getanop () << endl;
	cout << "CDU:  " << getcdu() << endl;
	cout << "Assunto:  " << getassunto ()  << endl;
	getchaves();
	cout << "Número de exemplares:  " << getnexemplares() << endl;
	cout << "Número de páginas:  "	<< getnumeropag () << endl;
	cout << "Tamanho da página:  " << gettamanhocm() << endl;
}

void TCC::catalografica(){
		if (autores.size() == 1 && chaves.size() == 1)
		{
			cout << "------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
			getautoresb(1);
			cout << gettitulo() << " - " << getedicao() << "° Edição : " << geteditora() << ", " << getanop() << "." << endl;
		    cout << gettamanhocm() << " cm." << endl << endl;
			cout << "1. " << getassunto() << ". I. " << chaves[0] << ". II. . III. " << gettitulo() << endl;
			cout << "                                                                        CDU: " << getcdu () << endl <<endl;			    
			cout << "------------------------------------------------------------------------------------------------------------" << endl << endl << endl;			
		}else if (autores.size() >=2  && chaves.size() == 1)
		{
			cout << "------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
			getautoresb(2);
			cout << gettitulo() << " - " << getedicao() << "° Edição : " << geteditora() << ", " << getanop() << "." << endl;
			cout << gettamanhocm() << " cm." << endl << endl;
			cout << "1. " << getassunto() << ". I. " << chaves[0] << ". II. . III. " << gettitulo() << endl;
			cout << "                                                                        CDU: " << getcdu () << endl <<endl;				    
			cout << "------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
		}else if (autores.size() >=2  && chaves.size() >= 2)
		{
			cout << "------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
			getautoresb(2);
			cout << gettitulo() << " - " << getedicao() << "° Edição : " << geteditora() << ", " << getanop() << "." << endl;
			cout << gettamanhocm() << " cm." << endl << endl;
			cout << "1. " << getassunto() << ". I. " << chaves[0] << ". II. " << chaves[1] << ". III. " << gettitulo() << endl;
			cout << "                                                                        CDU: " << getcdu () << endl <<endl;				    
			cout << "------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
		}else if (autores.size() == 1  && chaves.size() >= 2)
		{
			cout << "------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
			getautoresb(1);
			cout << gettitulo() << " - " << getedicao() << "° Edição : " << geteditora() << ", " << getanop() << "." << endl;
			cout << gettamanhocm() << " cm." << endl << endl;
			cout << "1. " << getassunto() << ". I. " << chaves[0] << ". II. " << chaves[1] << ". III. " << gettitulo() << endl;
			cout << "                                                                        CDU: " << getcdu () << endl <<endl;				    
			cout << "------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
		}
}

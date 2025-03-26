#ifndef ACERVO_H
#define ACERVO_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Acervo
{
	private:	
	public:
		void settipo (string tipo);
		string gettipo ();
		void setautores (string aut);
		void settitulo (string titulo);
		void setedicao (int edicao);
		void setcidade (string cidade);
		void seteditora (string editora);
		void setanop (string anop);
		void setcdu (string cdu);
		void setassunto (string assunto);
		void setnexemplares (int exe);
		void setnumeropag (int numeropag);
		void setchaves (string chav);
		void settamanhocm (float tamanhocm);
		void setid (int id);
		int getid ();
		void getautores ();
		string gettitulo ();
		int getedicao ();
		string getcidade ();
		string geteditora ();
		string getanop ();
		string getcdu ();
		string getassunto ();
		int getnexemplares ();
		int getnumeropag ();
		void getchaves ();
		float gettamanhocm ();
		void getautoresb (int n);
	
		int gettamanhoautor ();
		int gettamanhochave ();
		
		vector <string> getautores1 ();
		vector <string> getchaves1 ();
		
		void setstatus (int status);
		int getstatus ();
		
		void clear ();
		
		virtual void getinfo () = 0;
		virtual void catalografica () = 0;
		
		Acervo(vector <string> autor, string titulo, int edicao, string cidade, string editora, string anop, string cdu, string Assunto, int nexemplares, int numeropag, vector <string> chave, float tamanhocm, string tipo, int id, int status);
		~Acervo();
	protected:
		int status;
		vector <string> autores;
		string titulo;
		int edicao;
		string cidade;
		string editora;
		string anop;
		string cdu;
		string Assunto;
		int nexemplares;
		int numeropag;
		vector <string> chaves;
		float tamanhocm;
		int id;
		string tipo;
};

#endif


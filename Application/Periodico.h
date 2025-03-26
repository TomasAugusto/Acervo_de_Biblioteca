#ifndef PERIODICO_H
#define PERIODICO_H
#include "Acervo.h"

class Periodico : public Acervo
{
	private:
		string isnn;
	public:
		void setisnn (string isnn);
		string getisnn ();
		void getinfo ();
		void catalografica();
		
		Periodico(vector <string> autor, string titulo, int edicao, string cidade, string editora, string anop, string cdu, string Assunto, int nexemplares, int numeropag, vector <string> chave, float tamanhocm, string tipo, int id, string isnn, int status);
		~Periodico();
	protected:
};

#endif

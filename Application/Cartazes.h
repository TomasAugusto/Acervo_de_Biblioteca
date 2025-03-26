#ifndef CARTAZES_H
#define CARTAZES_H
#include "Acervo.h"

class Cartazes : public Acervo
{
	private:
	public:
		void getinfo ();
		void catalografica();
		
		Cartazes(vector <string> autor, string titulo, int edicao, string cidade, string editora, string anop, string cdu, string Assunto, int nexemplares, int numeropag, vector <string> chave, float tamanhocm, string tipo, int id, int status);
		~Cartazes();
	protected:
};

#endif

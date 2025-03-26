#ifndef MIDIA_H
#define MIDIA_H
#include "Acervo.h"

class Midia : public Acervo{
	private:
	public:
		void getinfo ();
		void catalografica();
		Midia(vector <string> autor, string titulo, int edicao, string cidade, string editora, string anop, string cdu, string Assunto, int nexemplares, int numeropag, vector <string> chave, float tamanhocm, string tipo, int id, int status);
		~Midia();
	protected:
};

#endif

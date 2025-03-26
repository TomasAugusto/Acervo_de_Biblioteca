#ifndef RELATORIO_H
#define RELATORIO_H
#include "Acervo.h"

class Relatorio : public Acervo{
	public:
		void catalografica();
		void getinfo();
		Relatorio(vector <string> autor, string titulo, int edicao, string cidade, string editora, string anop, string cdu, string Assunto, int nexemplares, int numeropag, vector <string> chave, float tamanhocm, string tipo, int id, int status);
		~Relatorio();
	protected:
};

#endif

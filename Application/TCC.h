#ifndef TCC_H
#define TCC_H
#include "Acervo.h"

class TCC : public Acervo{
	public:
		void catalografica();
		void getinfo();
		TCC(vector <string> autor, string titulo, int edicao, string cidade, string editora, string anop, string cdu, string Assunto, int nexemplares, int numeropag, vector <string> chave, float tamanhocm, string tipo, int id, int status);
		~TCC();
	protected:
};

#endif

#ifndef LIVRO_H
#define LIVRO_H
#include "Acervo.h"

class Livro : public Acervo
{
	private:
		string isbn;

	public:
		void setisbn (string isbn);
		string getisbn ();
		
		void getinfo ();
		void catalografica();
		
		Livro(vector <string> autor, string titulo, int edicao, string cidade, string editora, string anop, string cdu, string Assunto, int nexemplares, int numeropag, vector <string> chave, float tamanhocm, string tipo, int id, string isbn, int status);
		~Livro();
	protected:
};

#endif


#ifndef MAPA_H
#define MAPA_H
#include "Acervo.h"

class Mapa : public Acervo
{
	private:			
	public:	
		void getinfo ();
		void catalografica();
		Mapa(vector <string> autor, string titulo, int edicao, string cidade, string editora, string anop, string cdu, string Assunto, int nexemplares, int numeropag, vector <string> chave, float tamanhocm, string tipo, int id, int status);
		~Mapa();
	protected:
};

#endif

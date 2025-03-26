#ifndef CONTROLEDADOS_H
#define CONTROLEDADOS_H

#include "Acervo.h"
#include "Livro.h"
#include "TCC.h"
#include "Cartazes.h"
#include "Relatorio.h"
#include "Mapa.h"
#include "Midia.h"
#include "Periodico.h"

#include <fstream>
#include <cstdlib>

class Controledados  
{
	private:
	public:
		void gravardados(vector <Acervo *> acervo);
		vector <Acervo *> lerdados ();
		Controledados ();
	protected:
};

#endif

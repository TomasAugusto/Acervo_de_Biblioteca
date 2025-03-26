#include "Controledados.h"

Controledados::Controledados ()
{
}

void Controledados::gravardados(vector <Acervo *> acervo){
	ofstream arquivo1;
	ofstream arquivo2;
	ofstream arquivo3;
	ofstream arquivo4;
	ofstream arquivo5;
	ofstream arquivo6;
	ofstream arquivo7;
	vector <string> aux;
	
	Livro *l;
	Cartazes *c;
	Relatorio *r;
	Mapa *M;
	Midia *m;
	TCC *T;
	Periodico *p;
		
	arquivo1.open("Livro.txt", ios::trunc);
	arquivo2.open("Cartazes.txt", ios::trunc);
	arquivo3.open("Relatorio.txt", ios::trunc);
	arquivo4.open("Mapa.txt", ios::trunc);
	arquivo5.open("Midia.txt", ios::trunc);
	arquivo6.open("TCC.txt", ios::trunc);
	arquivo7.open("Periodico.txt", ios::trunc);
	if (arquivo1.is_open() && arquivo2.is_open() && arquivo3.is_open() && arquivo4.is_open() && arquivo5.is_open() && arquivo6.is_open() && arquivo7.is_open())
	{
	 	for (int i=0; i < acervo.size(); i++)
		 {
	 		if (acervo[i]->gettipo() == "Livro")
			{
	 			l = dynamic_cast < Livro* > (acervo[i]);
	 			aux = l->getautores1();
	 			arquivo1 << "Tipo: " << l->gettipo() << endl;
	 			arquivo1 << "ID: " << l->getid() << endl;
	 		    for (int i=0; i<aux.size(); i++)
				{	
					arquivo1 << "Autor " << i+1 << ": " << aux[i] << endl;	
				}
	 			arquivo1 << "Título: " << l->gettitulo() << endl;
	 			arquivo1 << "Edição: " << l->getedicao() << endl;
	 			arquivo1 << "Cidade: " << l->getcidade() << endl;
	 			arquivo1 << "Editora: " << l->geteditora() << endl;
	 			arquivo1 << "Ano de publicação: " << l->getanop() << endl;
	 			arquivo1 << "CDU: " << l->getcdu() << endl;
	 			arquivo1 << "ISBN: " << l->getisbn() << endl;
			 	arquivo1 << "Assunto: " << l->getassunto() << endl;
			 	aux = l->getchaves1();
			 	for (int i=0; i<aux.size(); i++)
				{
					arquivo1 << "Palavra-chave " << i+1 << ": " << aux[i] << endl;	
				}
				arquivo1 << "Número de exemplares: " << l->getnexemplares() << endl;
			 	arquivo1 << "Número de páginas: " << l->getnumeropag() << endl;
			 	arquivo1 << "Tamanho da página: " << l->gettamanhocm() << endl;
			 	arquivo1 << "Status: " << l->getstatus() << endl;
			}else if (acervo[i]->gettipo() == "Cartaz")
			{
			 	c = dynamic_cast < Cartazes* > (acervo[i]);
	 			aux = c->getautores1();
	 			arquivo2 << "Tipo: " << c->gettipo() << endl;
	 			arquivo2 << "ID: " << c->getid() << endl;
	 		    for (int i=0; i<aux.size(); i++)
				{
					arquivo2 << "Autor " << i+1 << ": " << aux[i] << endl;	
				}
	 			arquivo2 << "Título: " << c->gettitulo() << endl;
	 			arquivo2 << "Edição: " << c->getedicao() << endl;
	 			arquivo2 << "Cidade: " << c->getcidade() << endl;
	 			arquivo2 << "Editora: " << c->geteditora() << endl;
	 			arquivo2 << "Ano de publicação: " << c->getanop() << endl;
	 			arquivo2 << "CDU: " << c->getcdu() << endl;
			 	arquivo2 << "Assunto: " << c->getassunto() << endl;
			 	aux = c->getchaves1();
			 	for (int i=0; i<aux.size(); i++)
				{
					arquivo2 << "Palavra-chave " << i+1 << ": " << aux[i] << endl;	
				}
				arquivo2 << "Número de exemplares: " << c->getnexemplares() << endl;
			 	arquivo2 << "Número de páginas: " << c->getnumeropag() << endl;
			 	arquivo2 << "Tamanho da página: " << c->gettamanhocm() << endl;
			 	arquivo2 << "Status: " << c->getstatus() << endl;
			 }else if (acervo[i]->gettipo() == "Relatório")
			 {
			 	r = dynamic_cast < Relatorio* > (acervo[i]);
	 			aux = r->getautores1();
	 			arquivo3 << "Tipo: " << r->gettipo() << endl;
	 			arquivo3 << "ID: " << r->getid() << endl;
	 		    for (int i=0; i<aux.size(); i++)
				{
					arquivo3 << "Autor " << i+1 << ": " << aux[i] << endl;	
				}
	 			arquivo3 << "Título: " << r->gettitulo() << endl;
	 			arquivo3 << "Edição: " << r->getedicao() << endl;
	 			arquivo3 << "Cidade: " << r->getcidade() << endl;
	 			arquivo3 << "Editora: " << r->geteditora() << endl;
	 			arquivo3 << "Ano de publicação: " << r->getanop() << endl;
	 			arquivo3 << "CDU: " << r->getcdu() << endl;
			 	arquivo3 << "Assunto: " << r->getassunto() << endl;
			 	aux = r->getchaves1();
			 	for (int i=0; i<aux.size(); i++)
				{
					arquivo3 << "Palavra-chave " << i+1 << ": " << aux[i] << endl;	
				}
				arquivo3 << "Número de exemplares: " << r->getnexemplares() << endl;
			 	arquivo3 << "Número de páginas: " << r->getnumeropag() << endl;
			 	arquivo3 << "Tamanho da página: " << r->gettamanhocm() << endl;
			 	arquivo3 << "Status: " << r->getstatus() << endl;
			}else if (acervo[i]->gettipo() == "Mapa")
			{
			 	M = dynamic_cast < Mapa* > (acervo[i]);
	 			aux = M->getautores1();
	 			arquivo4 << "Tipo: " << M->gettipo() << endl;
	 			arquivo4 << "ID: " << M->getid() << endl;
	 		    for (int i=0; i<aux.size(); i++)
				{
					arquivo4 << "Autor " << i+1 << ": " << aux[i] << endl;	
				}
	 			arquivo4 << "Título: " << M->gettitulo() << endl;
	 			arquivo4 << "Edição: " << M->getedicao() << endl;
	 			arquivo4 << "Cidade: " << M->getcidade() << endl;
	 			arquivo4 << "Editora: " << M->geteditora() << endl;
	 			arquivo4 << "Ano de publicação: " << M->getanop() << endl;
	 			arquivo4 << "CDU: " << M->getcdu() << endl;
			 	arquivo4 << "Assunto: " << M->getassunto() << endl;
			 	aux = M->getchaves1();
			 	for (int i=0; i<aux.size(); i++)
				{
					arquivo4 << "Palavra-chave " << i+1 << ": " << aux[i] << endl;	
				}
				arquivo4 << "Número de exemplares: " << M->getnexemplares() << endl;
			 	arquivo4 << "Número de páginas: " << M->getnumeropag() << endl;
			 	arquivo4 << "Tamanho da página: " << M->gettamanhocm() << endl;
			 	arquivo4 << "Status: " << M->getstatus() << endl;
			}else if (acervo[i]->gettipo() == "DVD" || acervo[i]->gettipo() == "Fita" || acervo[i]->gettipo() == "VHS" || acervo[i]->gettipo() == "CD")
			{
			 	m = dynamic_cast < Midia* > (acervo[i]);
	 			aux = m->getautores1();
	 			arquivo5 << "Tipo: " << m->gettipo() << endl;
	 			arquivo5 << "ID: " << m->getid() << endl;
	 		    for (int i=0; i<aux.size(); i++)
				{
					arquivo5 << "Autor " << i+1 << ": " << aux[i] << endl;	
				}
	 			arquivo5 << "Título: " << m->gettitulo() << endl;
	 			arquivo5 << "Edição: " << m->getedicao() << endl;
	 			arquivo5 << "Cidade: " << m->getcidade() << endl;
	 			arquivo5 << "Editora: " << m->geteditora() << endl;
	 			arquivo5 << "Ano de publicação: " << m->getanop() << endl;
	 			arquivo5 << "CDU: " << m->getcdu() << endl;
			 	arquivo5 << "Assunto: " << m->getassunto() << endl;
			 	aux = m->getchaves1();
			 	for (int i=0; i<aux.size(); i++)
				{
					arquivo5 << "Palavra-chave " << i+1 << ": " << aux[i] << endl;	
				}
				arquivo5 << "Número de exemplares: " << m->getnexemplares() << endl;
			 	arquivo5 << "Número de páginas: " << m->getnumeropag() << endl;
			 	arquivo5 << "Tamanho da página: " << m->gettamanhocm() << endl;
			 	arquivo5 << "Status: " << m->getstatus() << endl;
			}else if (acervo[i]->gettipo() == "Tese" || acervo[i]->gettipo() == "Dissertação" || acervo[i]->gettipo() == "Monografia" )
			{
			 	T = dynamic_cast < TCC* > (acervo[i]);
	 			aux = T->getautores1();
	 			arquivo6 << "Tipo: " << T->gettipo() << endl;
	 			arquivo6 << "ID: " << T->getid() << endl;
	 		    for (int i=0; i<aux.size(); i++)
				{
					arquivo6 << "Autor " << i+1 << ": " << aux[i] << endl;	
				}
	 			arquivo6 << "Título: " << T->gettitulo() << endl;
	 			arquivo6 << "Edição: " << T->getedicao() << endl;
	 			arquivo6 << "Cidade: " << T->getcidade() << endl;
	 			arquivo6 << "Editora: " << T->geteditora() << endl;
	 			arquivo6 << "Ano de publicação: " << T->getanop() << endl;
	 			arquivo6 << "CDU: " << T->getcdu() << endl;
			 	arquivo6 << "Assunto: " << T->getassunto() << endl;
			 	aux = T->getchaves1();
			 	for (int i=0; i<aux.size(); i++)
				{
					arquivo6 << "Palavra-chave " << i+1 << ": " << aux[i] << endl;	
				}
				arquivo6 << "Número de exemplares: " << T->getnexemplares() << endl;
			 	arquivo6 << "Número de páginas: " << T->getnumeropag() << endl;
			 	arquivo6 << "Tamanho da página: " << T->gettamanhocm() << endl;
			 	arquivo6 << "Status: " << T->getstatus() << endl;
			}else if (acervo[i]->gettipo() == "Revista" || acervo[i]->gettipo() == "Jornal")
			{
	 			p = dynamic_cast < Periodico* > (acervo[i]);
	 			aux = p->getautores1();
	 			arquivo7 << "Tipo: " << p->gettipo() << endl;
	 			arquivo7 << "ID: " << p->getid() << endl;
	 		    for (int i=0; i<aux.size(); i++)
				{
					arquivo7 << "Autor " << i+1 << ": " << aux[i] << endl;	
				}
	 			arquivo7 << "Título: " << p->gettitulo() << endl;
	 			arquivo7 << "Edição: " << p->getedicao() << endl;
	 			arquivo7 << "Cidade: " << p->getcidade() << endl;
	 			arquivo7 << "Editora: " << p->geteditora() << endl;
	 			arquivo7 << "Ano de publicação: " << p->getanop() << endl;
	 			arquivo7 << "CDU: " << p->getcdu() << endl;
	 			arquivo7 << "ISNN: " << p->getisnn() << endl;
			 	arquivo7 << "Assunto: " << p->getassunto() << endl;
			 	aux = p->getchaves1();
			 	for (int i=0; i<aux.size(); i++)
				{
					arquivo7 << "Palavra-chave " << i+1 << ": " << aux[i] << endl;	
				}
				arquivo7 << "Número de exemplares: " << p->getnexemplares() << endl;
			 	arquivo7 << "Número de páginas: " << p->getnumeropag() << endl;
			 	arquivo7 << "Tamanho da página: " << p->gettamanhocm() << endl;
			 	arquivo7 << "Status: " << p->getstatus() << endl;
			}
		}
		arquivo1.close();
		arquivo2.close();
		arquivo3.close();
		arquivo4.close();
		arquivo5.close();
		arquivo6.close();
		arquivo7.close();
	}
}

vector <Acervo *> Controledados::lerdados (){
	vector <Acervo *> acervo;
	ifstream arquivo1;
	ifstream arquivo2;
	ifstream arquivo3;
	ifstream arquivo4;
	ifstream arquivo5;
	ifstream arquivo6;
	ifstream arquivo7;
	string linha;
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
	string isbn, isnn;
	Acervo *aux;

	arquivo1.open("Livro.txt");
	arquivo2.open("Cartazes.txt");
	arquivo3.open("Relatorio.txt");
	arquivo4.open("Mapa.txt");
	arquivo5.open("Midia.txt");
	arquivo6.open("TCC.txt");
	arquivo7.open("Periodico.txt");
	
	if (arquivo1.is_open())
	{
		while (! arquivo1.eof())
		{
			getline (arquivo1, linha);
			if (! linha.empty())
			{
				tipo = linha.substr(6);
				getline (arquivo1, linha);
				id = atoi(linha.substr(4).c_str());
					do{
					getline (arquivo1, linha);
					if (linha[0]!='T')
					{	
						autores.push_back(linha.substr(9));
					}
				}while (linha[0]!='T');
				titulo = linha.substr (8);
				getline (arquivo1, linha);
				edicao = atoi(linha.substr(8).c_str());
				getline (arquivo1, linha);
				cidade = linha.substr(8);
				getline (arquivo1, linha);
				editora = linha.substr(9);
				getline (arquivo1, linha);
				anop = linha.substr(19);
				getline (arquivo1, linha);
				cdu = linha.substr(5);
				getline (arquivo1, linha);
				isbn = linha.substr(6);
				getline (arquivo1, linha);
				Assunto = linha.substr(9);
				do
				{
					getline (arquivo1, linha);
					if (linha[0] != 'N')
					{	
						chaves.push_back(linha.substr(17));
					}
				}while (linha[0] != 'N');
				nexemplares = atoi (linha.substr(22).c_str());
				getline (arquivo1, linha);
				numeropag = atoi (linha.substr(19).c_str());
				getline (arquivo1, linha);
				tamanhocm = atof (linha.substr (19).c_str());
				getline (arquivo1, linha);
				status = atoi (linha.substr(7).c_str());
				aux = new Livro (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag,chaves, tamanhocm, tipo, id, isbn, status);
				acervo.push_back(aux);
				autores.clear();
				chaves.clear();
			}
		}
	}
	
	if (arquivo2.is_open())
	{
		while (! arquivo2.eof())
		{
			getline (arquivo2, linha);
			if (! linha.empty())
			{
				tipo = linha.substr(6);
				getline (arquivo2, linha);
				id = atoi(linha.substr(4).c_str());
					do
					{
					getline (arquivo2, linha);
					if (linha[0]!='T')
					{	
						autores.push_back(linha.substr(9));
					}
				}while (linha[0]!='T');
				titulo = linha.substr (8);
				getline (arquivo2, linha);
				edicao = atoi(linha.substr(8).c_str());
				getline (arquivo2, linha);
				cidade = linha.substr(8);
				getline (arquivo2, linha);
				editora = linha.substr(9);
				getline (arquivo2, linha);
				anop = linha.substr(19);
				getline (arquivo2, linha);
				cdu = linha.substr(5);
				getline (arquivo2, linha);
				Assunto = linha.substr(9);
				do
				{
					getline (arquivo2, linha);
					if (linha[0] != 'N')
					{
						chaves.push_back(linha.substr(17));
					}
				}while (linha[0] != 'N');
				nexemplares = atoi (linha.substr(22).c_str());
				getline (arquivo2, linha);
				numeropag = atoi (linha.substr(19).c_str());
				getline (arquivo2, linha);
				tamanhocm = atof (linha.substr (19).c_str());
				getline (arquivo2, linha);
				status = atoi (linha.substr(7).c_str());
				aux = new Cartazes (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag,chaves, tamanhocm, tipo, id, status);
				acervo.push_back(aux);
				autores.clear();
				chaves.clear();
			}	
		}
	}
	
	if (arquivo3.is_open())
	{
		while (! arquivo3.eof())
		{
			getline (arquivo3, linha);
			if (! linha.empty())
			{
				tipo = linha.substr(6);
				getline (arquivo3, linha);
				id = atoi(linha.substr(4).c_str());
					do{
					getline (arquivo3, linha);
					if (linha[0]!='T')
					{
						autores.push_back(linha.substr(9));
					}
				}while (linha[0]!='T');
				titulo = linha.substr (8);
				getline (arquivo3, linha);
				edicao = atoi(linha.substr(8).c_str());
				getline (arquivo3, linha);
				cidade = linha.substr(8);
				getline (arquivo3, linha);
				editora = linha.substr(9);
				getline (arquivo3, linha);
				anop = linha.substr(19);
				getline (arquivo3, linha);
				cdu = linha.substr(5);
				getline (arquivo3, linha);
				Assunto = linha.substr(9);
				do
				{
					getline (arquivo3, linha);
					if (linha[0] != 'N')
					{
						chaves.push_back(linha.substr(17));
					}
				}while (linha[0] != 'N');
				nexemplares = atoi (linha.substr(22).c_str());
				getline (arquivo3, linha);
				numeropag = atoi (linha.substr(19).c_str());
				getline (arquivo3, linha);
				tamanhocm = atof (linha.substr (19).c_str());
				getline (arquivo3, linha);
				status = atoi (linha.substr(7).c_str());
				aux = new Relatorio (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag,chaves, tamanhocm, tipo, id, status);
				acervo.push_back(aux);
				autores.clear();
				chaves.clear();
			}	
		}
	}
	
	if (arquivo4.is_open())
	{
		while (! arquivo4.eof())
		{
			getline (arquivo4, linha);
			if (! linha.empty())
			{
				tipo = linha.substr(6);
				getline (arquivo4, linha);
				id = atoi(linha.substr(4).c_str());
					do
					{
					getline (arquivo4, linha);
					if (linha[0]!='T')
					{		
						autores.push_back(linha.substr(9));
					}
				}while (linha[0]!='T');
				titulo = linha.substr (8);
				getline (arquivo4, linha);
				edicao = atoi(linha.substr(8).c_str());
				getline (arquivo4, linha);
				cidade = linha.substr(8);
				getline (arquivo4, linha);
				editora = linha.substr(9);
				getline (arquivo4, linha);
				anop = linha.substr(19);
				getline (arquivo4, linha);
				cdu = linha.substr(5);
				getline (arquivo4, linha);
				Assunto = linha.substr(9);
				do{
					getline (arquivo4, linha);
					if (linha[0] != 'N')
					{
						chaves.push_back(linha.substr(17));
					}
				}while (linha[0] != 'N');
				nexemplares = atoi (linha.substr(22).c_str());
				getline (arquivo4, linha);
				numeropag = atoi (linha.substr(19).c_str());
				getline (arquivo4, linha);
				tamanhocm = atof (linha.substr (19).c_str());
				getline (arquivo4, linha);
				status = atoi (linha.substr(7).c_str());
				aux = new Mapa (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag,chaves, tamanhocm, tipo, id, status);
				acervo.push_back(aux);
				autores.clear();
				chaves.clear();
			}
		}
	}
	
	if (arquivo5.is_open())
	{
		while (! arquivo5.eof())
		{
			getline (arquivo5, linha);
			if (! linha.empty())
			{
				tipo = linha.substr(6);
				getline (arquivo5, linha);
				id = atoi(linha.substr(4).c_str());
					do
					{
					getline (arquivo5, linha);
					if (linha[0]!='T')
					{
						autores.push_back(linha.substr(9));
					}
				}while (linha[0]!='T');
				titulo = linha.substr (8);
				getline (arquivo5, linha);
				edicao = atoi(linha.substr(8).c_str());
				getline (arquivo5, linha);
				cidade = linha.substr(8);
				getline (arquivo5, linha);
				editora = linha.substr(9);
				getline (arquivo5, linha);
				anop = linha.substr(19);
				getline (arquivo5, linha);
				cdu = linha.substr(5);
				getline (arquivo5, linha);
				Assunto = linha.substr(9);
				do
				{
					getline (arquivo5, linha);
					if (linha[0] != 'N')
					{	
						chaves.push_back(linha.substr(17));
					}
				}while (linha[0] != 'N');
				nexemplares = atoi (linha.substr(22).c_str());
				getline (arquivo5, linha);
				numeropag = atoi (linha.substr(19).c_str());
				getline (arquivo5, linha);
				tamanhocm = atof (linha.substr (19).c_str());
				getline (arquivo5, linha);
				status = atoi (linha.substr(7).c_str());
				aux = new Midia (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag,chaves, tamanhocm, tipo, id, status);
				acervo.push_back(aux);
				autores.clear();
				chaves.clear();
			}
		}
	}
	
	if (arquivo6.is_open())
	{
		while (! arquivo6.eof())
		{
			getline (arquivo6, linha);
			if (! linha.empty())
			{
				tipo = linha.substr(6);
				getline (arquivo6, linha);
				id = atoi(linha.substr(4).c_str());
					do
					{
						getline (arquivo6, linha);
						if (linha[0]!='T')
					{
						autores.push_back(linha.substr(9));
					}
				}while (linha[0]!='T');
				titulo = linha.substr (8);
				getline (arquivo6, linha);
				edicao = atoi(linha.substr(8).c_str());
				getline (arquivo6, linha);
				cidade = linha.substr(8);
				getline (arquivo6, linha);
				editora = linha.substr(9);
				getline (arquivo6, linha);
				anop = linha.substr(19);
				getline (arquivo6, linha);
				cdu = linha.substr(5);
				getline (arquivo6, linha);
				Assunto = linha.substr(9);
				do
				{
					getline (arquivo6, linha);
					if (linha[0] != 'N')
					{
						chaves.push_back(linha.substr(17));
					}
				}while (linha[0] != 'N');
				nexemplares = atoi (linha.substr(22).c_str());
				getline (arquivo6, linha);
				numeropag = atoi (linha.substr(19).c_str());
				getline (arquivo6, linha);
				tamanhocm = atof (linha.substr (19).c_str());
				getline (arquivo6, linha);
				status = atoi (linha.substr(7).c_str());
				aux = new TCC (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag,chaves, tamanhocm, tipo, id, status);
				acervo.push_back(aux);
				autores.clear();
				chaves.clear();
			}
		}
	}
	
	if (arquivo7.is_open())
	{
		while (! arquivo7.eof())
		{
			getline (arquivo7, linha);
			if (! linha.empty())
			{
				tipo = linha.substr(6);
				getline (arquivo7, linha);
				id = atoi(linha.substr(4).c_str());
					do
					{
					getline (arquivo7, linha);
					if (linha[0]!='T')
					{
						autores.push_back(linha.substr(9));
					}
				}while (linha[0]!='T');
				titulo = linha.substr (8);
				getline (arquivo7, linha);
				edicao = atoi(linha.substr(8).c_str());
				getline (arquivo7, linha);
				cidade = linha.substr(8);
				getline (arquivo7, linha);
				editora = linha.substr(9);
				getline (arquivo7, linha);
				anop = linha.substr(19);
				getline (arquivo7, linha);
				cdu = linha.substr(5);
				getline (arquivo7, linha);
				isnn = linha.substr(6);
				getline (arquivo7, linha);
				Assunto = linha.substr(9);
				do
				{
					getline (arquivo7, linha);
					if (linha[0] != 'N')
					{
						chaves.push_back(linha.substr(17));
					}
				}while (linha[0] != 'N');
				nexemplares = atoi (linha.substr(22).c_str());
				getline (arquivo7, linha);
				numeropag = atoi (linha.substr(19).c_str());
				getline (arquivo7, linha);
				tamanhocm = atof (linha.substr (19).c_str());
				getline (arquivo7, linha);
				status = atoi (linha.substr(7).c_str());
				aux = new Periodico (autores, titulo, edicao, cidade, editora, anop, cdu, Assunto, nexemplares, numeropag,chaves, tamanhocm, tipo, id, isnn, status);
				acervo.push_back(aux);
				autores.clear();
				chaves.clear();
			}
		}
	}
	
	arquivo1.close();
	arquivo2.close();
	arquivo3.close();
	arquivo4.close();
	arquivo5.close();
	arquivo6.close();
	arquivo7.close();
	return acervo;
}

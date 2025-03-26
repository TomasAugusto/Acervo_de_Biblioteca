#include "Acervo.h"

Acervo::Acervo(vector <string> autor, string titulo, int edicao, string cidade, string editora, string anop, string cdu, string Assunto, int nexemplares, int numeropag, vector <string> chave, float tamanhocm, string tipo, int id, int status)
{
	for (int i=0; i<autor.size(); i++)
	{
		autores.push_back(autor[i]);
	}
	this->titulo= titulo;
	this->edicao= edicao;
	this->cidade = cidade;
	this->editora = editora;
	this->anop = anop;
	this->cdu =cdu;
	this->Assunto =Assunto;
	this->nexemplares = nexemplares;
	this->numeropag = numeropag;
	for (int i=0; i<chave.size(); i++)
	{
		chaves.push_back(chave[i]);
	}
	this->tamanhocm = tamanhocm;
	this->tipo = tipo;
	this->id = id;
	this->status = status;
}

Acervo::~Acervo()
{
	for (int i = 0; i < autores.size (); i++)
	{
		autores.pop_back();	
	}
	for (int i = 0; i < chaves.size (); i++)
	{
		chaves.pop_back();
	}
}

void Acervo::setautores (string aut){
		autores.push_back(aut);
}

void Acervo::settitulo (string titulo){
	this->titulo = titulo;
}

void Acervo::setedicao (int edicao){
	this->edicao = edicao;
}

void Acervo::setcidade (string cidade){
	this->cidade = cidade;
}

void Acervo::seteditora (string editora){
	this->editora = editora;
}

void Acervo::setanop (string anop){
	this->anop = anop;
}

void Acervo::setcdu (string cdu){
	this->cdu = cdu;
}

void Acervo::setassunto (string assunto){
	this->Assunto = assunto;
}

void Acervo::setnexemplares (int exe){
	nexemplares = exe;
}

void Acervo::setnumeropag (int numeropag){
	this->numeropag = numeropag;
}

void Acervo::setchaves (string chav){
		chaves.push_back(chav);
}

void Acervo::settamanhocm (float tamanhocm){
	this->tamanhocm = tamanhocm;
}

void Acervo::getautores (){
	for (int i = 0; i<autores.size(); i++)
	{
		cout << "Autor" << i+1 << ": " << autores[i] << endl;
	}
}

string Acervo::gettitulo (){
	return titulo;
}

int Acervo::getedicao (){
	return edicao;
}

string Acervo::getcidade (){
	return cidade;	
}

string Acervo::geteditora (){
	return editora;
}

string Acervo::getanop (){
	return anop;
}

string Acervo::getcdu (){
	return cdu;
}

string Acervo::getassunto (){
	return Assunto;
}

int Acervo::getnexemplares (){
	return nexemplares;
}

int Acervo::getnumeropag (){
	return numeropag;
}

void Acervo::getchaves (){
	for (int i = 0; i<chaves.size(); i++)
	{
		cout << "Chave" << i+1 << ": " << chaves[i] << endl;
	}
}

float Acervo::gettamanhocm (){
	return tamanhocm;
}

void Acervo::setid (int id){
	this->id = id;
}

int Acervo::getid (){
	return id;
}

string Acervo::gettipo (){
	return tipo;
}

void Acervo::settipo (string tipo){
	this->tipo = tipo;
}

void Acervo::getautoresb(int n){
	for (int i = 0; i<n; i++)
	{	
		cout << "Autor " << i+1 << ": " << autores[i] << ". ";
	}
	cout << endl;
}

int Acervo::gettamanhoautor (){
	return autores.size();
}

int Acervo::gettamanhochave (){
	return chaves.size();
}

vector <string> Acervo::getautores1 (){
	return autores;
}

vector <string> Acervo::getchaves1 (){
	return chaves;
}

void Acervo::setstatus (int status){
	this->status = status;
}

int Acervo::getstatus (){
	return status;
}

void Acervo::clear (){
	chaves.clear();
	autores.clear();
}

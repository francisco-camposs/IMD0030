#include <iostream>
#include "aluno.h"

using namespace std;

// void setIdade(int idade_);
// void setPeso(float peso_);
// void setNome(string nome_);

// int getIdade();
// float getPeso();
// string getNome();
// void setMedia(float media_);
// float getMedia();


int main (){

	Aluno Joeverson;
	Joeverson.setNome("Joeverson");
	cout << Joeverson.getNome() << endl;

	// Upcasting
	Pessoa * Marcos = new Aluno;
	Marcos->setNome("Marcos");
	cout << Marcos->getNome() << endl;
	Marcos->setPeso(12.234);
	cout << Marcos->getPeso() << endl;

	// Downcasting
	Aluno *cleiton = new Aluno;
	Pessoa *Cleiton = (Aluno*) cleiton;
	Cleiton->setNome("Cleiton");
	cout << Cleiton->getNome() << endl;
	Cleiton->setPeso(10.0);
	cout << Cleiton->getPeso() << endl;

	cout << sizeof(char) << endl; 


	return 0;
}
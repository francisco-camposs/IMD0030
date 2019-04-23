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
	Aluno *cleiton = new Pessoa;
	cleiton->setNome("Cleiton");
	cout << cleiton->getNome() << endl;
	cleiton->setMedia(10.0);
	cout << cleiton->getMedia() << endl;



	return 0;
}
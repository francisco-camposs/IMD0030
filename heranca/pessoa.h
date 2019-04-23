#ifndef _PESSOA_H_
#define _PESSOA_H_

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
	protected:
		int idade;
		float peso;
		string nome;

	public:
		void setIdade(int idade_);
		void setPeso(float peso_);
		void setNome(string nome_);

		int getIdade();
		float getPeso();
		string getNome();
};

#endif
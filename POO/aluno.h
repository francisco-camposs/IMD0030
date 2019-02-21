#include <iostream>

using namespace std;

class aluno{
	private:
		char nome[30];
		char curso[30];
		unsigned long long int matricula;
		float rendimento;
		int faltas;

	public:
		int getN_Frequencia();
		void setN_inserir_dados();
		void setN_Imprimir_dados();
};
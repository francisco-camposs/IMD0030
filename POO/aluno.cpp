#include "aluno.h"

int aluno::getN_Frequencia (){
	return matricula;
}

void aluno::setN_inserir_dados (){
	cout << "Digite seu nome:";
	cin >> nome;

	cout << "Digite seu curso:";
	cin >> curso;

	cout << "Digite suu matricula:";
	cin >> matricula;

	cout << "Digite seu rendimento:";
	cin >> rendimento;

	cout << "Digite suas faltas:";
	cin >> faltas;
}

void aluno::setN_Imprimir_dados(){
	cout << nome<< endl;

	cout << curso<< endl;

	cout << matricula<< endl;

	cout << rendimento<< endl;

	cout <<  faltas<< endl << endl;
}
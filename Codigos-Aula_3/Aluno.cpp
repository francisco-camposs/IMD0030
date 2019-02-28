#ifndef Aluno
#include "Aluno.h"

void Aluno::getN_Imprimir_Atributos (){
	cout << nome_do_aluno << endl;
	cout << curso_do_aluno << endl;
	cout << matricula_do_aluno << endl;
	cout << turno << endl;
	cout << IRA << endl;
}

void Aluno::setN_atribuir_valor_nome(){
	cout << "Digite o nome do aluno: " << endl;
	cin >> nome_do_aluno;
}
void Aluno::setN_atribuir_valor_curso(){
	cout << "Digite o curso do aluno: " << endl;
	cin >> curso_do_aluno;
}
void Aluno::setN_atribuir_valor_matricula(){
	cout << "Digite a matricula do aluno: " << endl;
	cin >> matricula_do_aluno;
}
void Aluno::setN_atribuir_valor_turno(){
	cout << "Digite o turno do aluno: " << endl;
	cin >> turno;
}
void Aluno::setN_atribuir_valor_IRA(){
	cout << "Digite o IRA do aluno: " << endl;
	cin >> IRA;
}

Aluno::Aluno () {
	nome_do_aluno = "John Doe";
	curso_do_aluno = "BTI";
	matricula_do_aluno = 12345678;
	turno = "Matutino";
	IRA = 100.00;
}

#endif
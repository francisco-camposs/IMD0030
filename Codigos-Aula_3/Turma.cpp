#include "Turma.h"

void Turma::setN_Inserir_componentes_turma(){

}

void Turma::setN_Inserir_Qtnd_componentes_turma(){

}

void Turma::setN_ALterar_codigo_turma(){

}

void Turma::setN_ALterar_nome_turma(){

}

int Turma::setN_retornar_Qtnd_componentes_turma(){
	return  Qtnd_alunos;
}

Turma::Turma(){
	Nome_turma = "Turma de Silvío";
	Codigo_turma = "IMD0030";
	Qtnd_alunos = 30;
	Componentes =  new Aluno[Qtnd_alunos];
}

void setN_Imprimir_componentes(Turma turma){
	for (int i = 0; i < turma.setN_retornar_Qtnd_componentes_turma(); i++){
		turma.Componentes[i].getN_Imprimir_Atributos();
	}
}

		// string nome_do_aluno;
		// string curso_do_aluno;
		// unsigned long int matricula_do_aluno;
		// string turno;
		// float IRA;
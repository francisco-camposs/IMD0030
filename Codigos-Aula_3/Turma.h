#include <iostream>
#ifndef Aluno
	#include "Aluno.h"
#endif
using namespace std;

class Turma {
	private:
		string Nome_turma;
		string Codigo_turma;
		int Qtnd_alunos;
	public:
		Aluno *Componentes;

	public:
		void setN_Inserir_componentes_turma();
		void setN_Inserir_Qtnd_componentes_turma();
		void setN_ALterar_codigo_turma();
		void setN_ALterar_nome_turma();
		int setN_retornar_Qtnd_componentes_turma();
		void getN_Imprimir_componentes(Turma turma);
		Turma();
		
};

#include <iostream>
#ifndef Aluno

using namespace std;

class Aluno{
	private:
		string nome_do_aluno;
		string curso_do_aluno;
		unsigned long int matricula_do_aluno;
		string turno;
		float IRA;

	public:
		void setN_atribuir_valor_nome();
		void setN_atribuir_valor_curso();
		void setN_atribuir_valor_matricula();
		void setN_atribuir_valor_turno();
		void setN_atribuir_valor_IRA();

		void getN_Imprimir_Atributos();
		Aluno ();	
};

#endif

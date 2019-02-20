#include <iostream>
#include <cstring>

using namespace std;

class Aluno {
	public:
		unsigned long int matricula;
		char nome[30];
		char curso[30];
		int nota[3];
		float presenca; // Porcentagem;

		void frequencia();
};

void Aluno::frequencia () {
	if (presenca >= 75.0){
		cout << "Não é reprovado por falta" << endl;
	}
	else {
		cout << "Está reprovao por falta" << endl;
	}
}

int main () {

	int numero_de_alunos;
	cin >> numero_de_alunos;

	Aluno *aluno = new Aluno[numero_de_alunos];

	for (int i = 0; i < numero_de_alunos; i++){
		cout << "Digite a matricula do aluno " << i << ": " << endl;
		cin >> aluno[i].matricula;

		cout << "Digite o nome do aluno " << i << ": " << endl;
		char String[20];
		cin >> String;
		strcpy(aluno[i].nome, String);
		strcpy(String, "");

		cout << "Digite o curso do aluno " << i << ": " << endl;
		cin >> String;
		strcpy(aluno[i].curso, String);
		strcpy(String, "");

		cout << "Digite as notas do aluno " << i << ": " << endl;
		for(int i = 0; i < 3; i++){
			cout << "Digite a nota " << i << ":" << endl;
			cin >> aluno[i].nota[i];
		}

		cout << "Digite a presenca do aluno " << i << ": " << endl;
		cin >> aluno[i].presenca;	

		aluno[i].frequencia();
	}
	return 0;
}
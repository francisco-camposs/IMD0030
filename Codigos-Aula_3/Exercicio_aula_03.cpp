#include <iostream>
#include <cstring>

using namespace std;

class Aluno {
	public:
		unsigned long int matricula;
		char nome[40];
		char curso[20];
		int nota[3];
		float presenca; // Porcentagem;

		void frequencia();
		void imprime_dados();
};

void Aluno::frequencia () {
	if (presenca >= 75.0){
		cout << "Não é reprovado por falta" << endl;
	}
	else {
		cout << "Está reprovado por falta" << endl;
	}
}

void Aluno::imprime_dados(){
	cout << "Nome: " << nome << endl;
	cout << "matrícula: " << matricula << endl;
	cout << "Curso: " << curso << endl;
}



int main () {

	int numero_de_alunos;
	cin >> numero_de_alunos;

	Aluno *aluno = new Aluno[numero_de_alunos];

	for (int i = 0; i < numero_de_alunos; i++){
		cout << "Digite a matricula do aluno " << i << ": " << endl;
		cin >> aluno[i].matricula;
		cout << aluno[i].matricula << endl;

		cout << "Digite o curso do aluno " << i << ": " << endl;
		cin.getline(aluno[i].curso,20);
		strcpy(aluno[i].curso, "");
		cin.getline(aluno[i].curso, 20);
		cout << aluno[i].curso << endl;

		cout << "Digite o nome do aluno " << i << ": " << endl;
		cin.getline(aluno[i].curso,20);
		strcpy(aluno[i].nome, "");
		cin.getline(aluno[i].nome, 40);
		cout << aluno[i].nome << endl;

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
#include <iostream>

using namespace std;

typedef struct Vetor{
	char* Dado;
	int N;
	int N_Max;
} Vetor;

Vetor Cria_Vetor(int N_Max){
	Vetor Vet;
	Vet.Dado = new char(N_Max);
	Vet.N = 0;
	Vet.N_Max = N_Max;
	return Vet;
}

char Acesso(Vetor *VV, int Pos){
	if(Pos < 0 || Pos > VV->N){
		cout << "Mas olha só, tá vazio." << endl;
		return '\n';
	}
	cout << "Mas O Que é isso?" << endl;
	return (VV->Dado[Pos]);
}

void inserir(Vetor * VV, int Pos, char Valor){
	if(Pos < 0 || Pos > VV->N){
		cout << "ERROOOOOUUU!!!" << endl;
		return;
	}
	if (VV->N == VV->N_Max){
		cout << "ERROOOOOUUU!!!" << endl;
		return;
	}
	for (int i = VV->N - 1; i >= Pos; i--){
		VV->Dado[i+1] = VV->Dado[i];
	}
	VV->Dado[Pos] = Valor;
	VV->N++;
}

void destruir_vetor(Vetor *VV){
	if (VV->Dado != NULL)
		delete[] VV->Dado;
	else
		cout << "Errou" << endl;
}

void remover(Vetor * VV, int Pos){
	if (Pos >= VV->N || VV->N == 0){
		cout << "ERROOOOOOOOOUUU!!!" << endl;
		return;
	}
	VV->N -=1;
	for (int i = Pos; i < VV->N; i++){
		VV->Dado[i] = VV->Dado[i+1];
		VV->Dado[i+1]=0;
	}
}


int main (){
	Vetor Vector = Cria_Vetor(5);
	cout << Vector.N << " " << Vector.N_Max << endl;
	for (int i = 0; i < 10; i++){
		inserir(&Vector, i,i+100);
	}

	for (int i = 0; i < Vector.N; i++){
		cout << Vector.Dado[i] << " ";
	}
	cout << endl;

	remover(&Vector, 0);
	inserir (&Vector, 0, 'F');

	for (int i = 0; i < Vector.N; i++){
		cout << Vector.Dado[i] << " ";
	}
	cout << endl;

	destruir_vetor(&Vector);
	destruir_vetor(&Vector);
	return 0;
}
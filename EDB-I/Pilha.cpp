#include <iostream>

using namespace std;

typedef struct Pilha {
	int N;
	int N_Max;
	int *Dado;
} Pilha;

Pilha criar(int N){
	Pilha stack;
	stack.N = 0;
	stack.N_Max = N;
	stack.Dado = new int(N);
	return stack;
}

int acesso(Pilha * VV, int Pos){
	if (Pos >= VV->N || Pos >= VV->N_Max || Pos < 0){
		cout << "Erro 00x00. " << endl;
		return -1;
	}
	return VV->Dado[Pos];
}

void insercao(Pilha * VV, int Valor){
	if (VV->N == VV->N_Max){
		cout << "Error 00X01." << "Não há espaço para inserir valores." << endl;
		return;
	}
	VV->Dado[VV->N] = Valor;
	VV->N +=1;
}

void remocao(Pilha * VV){
	if (VV->N == 0){
		cout << "Erro 00X02." << endl << "Não há nada a remover da pilha." << endl; 
		return;
	}
	VV->Dado[VV->N] = 0;
	VV->N -=1;
}

int main (){
	
	Pilha STACK = criar(5);

	for (int i = 0; i < 6; i++){
		insercao(&STACK, i+50*i);
	}

	for (int i = 0; i < 6; i++){
		cout << "Valor da posição " << i << ": " << acesso(&STACK, i) << endl;
	}

	for (int i = 0; i < 6; i++){
		remocao(&STACK);
	}



	return 0;
}
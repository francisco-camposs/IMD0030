#include <iostream>

using namespace std;

typedef struct Fila{
	int inicio;
	int N;
	int N_Max;
	int *Dado;
} Fila;

Fila Criar(int N){
	Fila heap;
	heap.N = 0;
	heap.N_Max = N;
	headp.Dado = new int(N);
	return heap;
}

void inserir(Fila * VV; int Valor){
	if (VV->N == VV->N_max){
		cout << "ERROR 00X00: \n Não há espaço para inserir." << endl;
		return;
	}
	if (VV->inicio - 1 < 0){
		VV->inicio += VV->N_Max;
	}
	VV->inicio -= 1;
	VV->Dado[VV->inicio] = valor;
	VV->N += 1;
}


int main (){



	return 0;
}
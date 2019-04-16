#ifndef _CONJUNTO_H_
#define _CONJUNTO_H_

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class Conjunto{
	private:
		vector<T> vetor;

	public:
		Conjunto();
		~Conjunto();

		void add_member(T member);
		void add_member(Conjunto Set);
		void print();
		int total();

		//Sobrecarga de Operadores
		// Operador de acesso para não ter de usar uma função 
		//para acessar um membro	
		T operator[](int indice);

		//União simples de conjuntos
		Conjunto<T>& operator+(Conjunto<T>& Set);
		// Diferença simples de conjuntos
		Conjunto<T>& operator-(Conjunto<T>& Set);
		// Diferença simétrica de conjuntos
		Conjunto<T>& operator/(Conjunto<T>& Set);

		template <typename Type>
		friend ostream& operator<< (ostream & os,
									Conjunto<Type>& Set);
};

template<typename T>
Conjunto<T>::Conjunto(){/*	*/};

template<typename T>
Conjunto<T>::~Conjunto(){
	int tam_vetor = vetor.size();
	for (int i = 0; i < tam_vetor; i++){
		vetor.pop_back();
	}
};

template<typename T>
void Conjunto<T>::add_member(T member){
	vetor.push_back(member);
};

template<typename T>
void Conjunto<T>::add_member(Conjunto set){
	for (int i = 0; i < set.total(); i++){
		vetor.push_back(set[i]);
	}
};

template <typename T>
int Conjunto<T>::total(){
	return vetor.size();
};

template<typename T>
void Conjunto<T>::print(){
	int tamanho = vetor.size();
	cout << "Conjunto: ";
	for (int i = 0; i < tamanho; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
};

template <typename T>
T Conjunto<T>::operator[](int indice){
	return vetor[indice];
};

template <typename T>
Conjunto<T>& Conjunto<T>::operator+ (Conjunto<T>& Set){
	int tam_vetor = vetor.size();
	int tam_Set = Set.total();
	int contador = 0;
	for (int i = 0; i < tam_vetor; i++){
		while(contador < tam_Set && vetor[i] != Set[contador]){
			contador++;
		}
		if (contador == tam_Set){
			Set.add_member(vetor[i]);
		} 
		contador = 0;
	}
	return Set;
};

template <typename T>
Conjunto<T>& Conjunto<T>::operator-(Conjunto<T>& Set){
	int tam_Set = Set.total();
	int tam_vetor = vetor.size();
	int contador = 0;
	for (int i = 0; i < tam_vetor; i++){
		while(contador < tam_Set && vetor[i] != Set[contador]){
			contador++;
		}
		if (contador == tam_Set){
			Set.add_member(vetor[i]);
		} 
		contador = 0;
	}
	return Set;
}

template <typename Type>
ostream& operator<< (ostream & os, Conjunto<Type>& Set)
{
	os << "{";
	for (int i = 0; i < Set.total(); i++){
		os << Set[i];
		if (i != Set.total()-1)
			os << ", ";
	}
	cout << "}\n";
	return os;
};

#endif
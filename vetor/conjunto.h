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
		int total() const;

		// Sobrecarga de Operadores
	public:
		// Operador de acesso para não ter de usar uma função.
		// Para acessar um membro.
		T operator[](int indice) const;

		// União simples de conjuntos
		Conjunto<T> operator+(Conjunto<T>& Set);

		// Intersecção de conjuntos
		Conjunto<T> operator/(Conjunto<T>& Set);

		// Diferença simples de conjuntos
		Conjunto<T> operator-(Conjunto<T>& Set);

		// Diferença simétrica de conjuntos
		Conjunto<T> operator%(Conjunto<T>& Set);	

		// Operador de extração, tô cansado de ficar chamando função.
		template <typename Type>
		friend ostream& operator<< (ostream & os,
									const Conjunto<Type>& Set);
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
	// for (int i = 0; i < vetor.size(); i++){
	// 	if (vetor[i] == member){
	// 		return;
	// 	}
	// }
	vetor.push_back(member);
};


template<typename T>
void Conjunto<T>::add_member(Conjunto set){
	for (int i = 0; i < set.total(); i++){
		vetor.push_back(set[i]);
	}
};


template <typename T>
int Conjunto<T>::total() const{
	return vetor.size();
};


template<typename T>
void Conjunto<T>::print(){
	cout << endl;
};


template <typename T>
T Conjunto<T>::operator[](int indice) const{
	return vetor[indice];
};

// União simples de conjuntos
template <typename T>
Conjunto<T> Conjunto<T>::operator+ (Conjunto<T>& Set){
	int tam_vetor = vetor.size();
	int tam_Set = Set.total();
	Conjunto<T> uniao;
	uniao.add_member(Set);
	int contador = 0;
	for (int i = 0; i < tam_vetor; i++){
		while(contador < tam_Set && vetor[i] != Set[contador]){
			contador++;
		}
		if (contador == tam_Set){
			uniao.add_member(vetor[i]);
		} 
		contador = 0;
	}
	return uniao;
};

// Intersecção de conjuntos
template<typename T>
Conjunto<T> Conjunto<T>::operator/(Conjunto<T>& Set){
	int tam_Set = Set.total();
	int tam_vetor = vetor.size();
	Conjunto<T> interseccao;
	int contador = 0;
	for (int i = 0; i < tam_vetor; i++){
		while(contador < tam_Set && vetor[i] != Set[contador]){
			contador++;
		}
		if (contador != tam_Set){
			interseccao.add_member(vetor[i]);
		} 
		contador = 0;
	}
	return interseccao;
};

// Diferença simétrica de conjuntos
template <typename T>
Conjunto<T> Conjunto<T>::operator-(Conjunto<T>& Set){
	int tam_Set = Set.total();
	int tam_vetor = vetor.size();
	Conjunto<T> diferenca_simples;
	int contador = 0;
	for (int i = 0; i < tam_vetor; i++){
		while(contador < tam_Set && vetor[i] != Set[contador]){
			contador++;
		}
		if (contador == tam_Set){
			diferenca_simples.add_member(vetor[i]);
		} 
		contador = 0;
	}
	return diferenca_simples;
};


template <typename T>
Conjunto<T> Conjunto<T>::operator%(Conjunto<T>& Set){
	int tam_Set = Set.total();
	int tam_vetor = vetor.size();
	Conjunto<T> diferenca_simetrica;
	int contador = 0;
	for (int i = 0; i < tam_vetor; i++){
		while(contador < tam_Set && vetor[i] != Set[contador]){
			contador++;
		}
		if (contador == tam_Set){
			diferenca_simetrica.add_member(vetor[i]);
		} 
		contador = 0;
	}
	for (int i = 0; i < tam_Set; i++){
		while(contador < tam_vetor && Set[i] != vetor[contador]){
			contador++;
		}
		if (contador == tam_vetor){
			diferenca_simetrica.add_member(Set[i]);
		} 
		contador = 0;
	}

	return diferenca_simetrica;
};


template <typename Type>
ostream& operator<< (ostream & os, const Conjunto<Type>& Set)
{
	int tam_vetor = Set.total();
	os << "{";
	for (int i = 0; i < tam_vetor; i++){
		os << Set[i];
		if (i != tam_vetor-1)
			os << ", ";
	}
	cout << "}\n";
	return os;
};

#endif
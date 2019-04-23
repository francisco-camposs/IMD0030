#include "pessoa.h"

void Pessoa::setIdade(int idade_){
	idade = idade_;
};

void Pessoa::setPeso(float peso_){
	peso = peso_;
};

void Pessoa::setNome(string nome_){
	nome = nome_;
};

int Pessoa::getIdade(){
	return idade;
};

float Pessoa::getPeso(){
	return peso;
};

string Pessoa::getNome(){
	return nome;
};

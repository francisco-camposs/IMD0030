#include "carro.h" 


	Carro::Carro(string nome, int ano, float capacidade_maxima, float consumo):
		modelo(nome),ano_de_fabricacao(ano),capacidade_maxima_tanque(capacidade_maxima),consumo_por_KM(consumo),
		combustivel_atual(0),distancia_percorrida(0){
		
		cout << "Foi criado um " << modelo <<", ano " << ano << " Suporta " 
			<<  capacidade_maxima_tanque << " " << "litros e consome " 
			<< consumo_por_KM <<" km/L." << endl;
	};

	void Carro::mover(float distancia){
		if (distancia/ consumo_por_KM > combustivel_atual){
			cout << "Combustivel insuficiente para mover." << endl;
			return;
		}
		combustivel_atual -= distancia / consumo_por_KM;
		distancia_percorrida += distancia;
	};

	void Carro::abastecer(float combustivel){
		if (capacidade_maxima_tanque < combustivel + combustivel_atual){
			cout << "Só foi póssivel abastecer " 
				<< capacidade_maxima_tanque - combustivel_atual 
				<< " litros." << endl;
			combustivel_atual = capacidade_maxima_tanque;
		}
		else
			combustivel_atual += combustivel;
	};

	float Carro::getQtdeCombustivel(){
		return combustivel_atual;
	};

	float Carro::getAutonomia(){
		return combustivel_atual * consumo_por_KM;
	};

	float Carro::getDistanciaPercorrida(){
		return distancia_percorrida;
	};

	ostream& operator<<(ostream& o,const Carro &carro_){
		o<< "Modelo " << carro_.modelo << "\n" 
			<<  "Ano: " << carro_.ano_de_fabricacao << "\n"
			<< "capacidade do tanque: " << carro_.capacidade_maxima_tanque << "\n" 
			<< "Consumo por km: " << carro_.consumo_por_KM << "\n";
		return o;
	};


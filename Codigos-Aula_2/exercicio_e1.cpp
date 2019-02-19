#include <iostream>
#include <cmath>

using namespace std;

int fatorial (int numero);

int primalidade (const int numero, int raiz_quadrada_de_numero);

int primo (const int numero);

int buscar_maior_primo (int numero);

int main () {
	int Numero_Desejado_Para_Saber_O_Fatorial;
	cin >> Numero_Desejado_Para_Saber_O_Fatorial;
	cout << buscar_maior_primo(fatorial(Numero_Desejado_Para_Saber_O_Fatorial)) << endl;

	return 0;
}

int fatorial (int numero) {
	if (numero == 0) {
		return 1;
	}
	return numero * fatorial(numero-1);
}

int primalidade (int numero, int sqrt_numero) {
	if (numero <= sqrt_numero) {
		return numero;
	}
	else if (numero%(sqrt_numero) == 0){
		return 0;
	}
	return primalidade (numero, sqrt_numero+2);
}

int primo (int numero)
{
	if (numero%2==0) {
		return 0;
	}
	else{
		return primalidade(numero, 3);
	}
}

int buscar_maior_primo (int numero) {
	if (primo(numero) == 0){
		return buscar_maior_primo(numero-1);
	}
	else {
		return primo(numero);
	}
}
#include <iostream>

using namespace std;

void encontrar_numeros_amigos (int numero_1, int numero_2);


// ***********************************************************************************
	int main () {
		int Num_1 = 1;
		int Num_2 = 1;
		encontrar_numeros_amigos(Num_1, Num_2);
		return 0;
	}
// ***********************************************************************************


void encontrar_numeros_amigos (int numero_1, int numero_2) {
	int soma_divisores_numero_1 = 0;
	int soma_divisores_numero_2 = 0;
	for (int numero_1 = 1; numero_1 <= 7000; numero_1++){
		for (int numero_2 = 1; numero_2 <= numero_1; numero_2++)
		{
			for (int l = 1; l < numero_1 ; l++){
				if (numero_1%l == 0){
					soma_divisores_numero_1 += l;
				}
			}
			for (int k = 1; k <= numero_2; k++){
				if (numero_2%k == 0){
					soma_divisores_numero_2 += k;
				}
			}
		}

		if ((soma_divisores_numero_1 == soma_divisores_numero_2) && (numero_1 != numero_2)){
			cout << "(" << numero_2 << ", " << numero_1 << ")" << endl;
		}
		soma_divisores_numero_1 = 0;
		soma_divisores_numero_2 = 0;
	}
}


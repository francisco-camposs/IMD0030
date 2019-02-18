#include <iostream>

using namespace std;

void encontrar_numeros_amigos ();

int soma_dos_contadores (int numero_para_encontra_os_divisores);


// ***********************************************************************************
	int main () {
		encontrar_numeros_amigos();
		return 0;
	}
// ***********************************************************************************


void encontrar_numeros_amigos () {
	int primeiro_numero_amigo;
	int segundo_numero_amigo;

	int divisores_do_primeiro = 0, divisores_do_segundo = 0;

	// Variável responsável pela não repetição na hora da impressão 
	int pulo_do_gato;

	for (primeiro_numero_amigo = 1; primeiro_numero_amigo < 7000; primeiro_numero_amigo++) {
		if (pulo_do_gato == primeiro_numero_amigo)
		{
			primeiro_numero_amigo++;
		}
		for (segundo_numero_amigo = 1; segundo_numero_amigo < 7000; segundo_numero_amigo++)
		{
			if (primeiro_numero_amigo == segundo_numero_amigo) {
				divisores_do_primeiro = 0;
				divisores_do_segundo = 0;
			}
			else {
				
				divisores_do_primeiro = soma_dos_contadores(primeiro_numero_amigo);

				divisores_do_segundo = soma_dos_contadores(segundo_numero_amigo);

				if (divisores_do_segundo == primeiro_numero_amigo && divisores_do_primeiro == segundo_numero_amigo) {
					cout << "(" <<primeiro_numero_amigo << ", " << segundo_numero_amigo << ")" << endl;
					pulo_do_gato = segundo_numero_amigo;
				}

				divisores_do_primeiro = 0;
				divisores_do_segundo = 0;
			}
		}
	}
}

int soma_dos_contadores (int numero_para_encontra_os_divisores) {
	int soma_dos_divisores = 0;
	for (int contador = 1; contador <= (numero_para_encontra_os_divisores/2); contador++ ) {
		if (numero_para_encontra_os_divisores % contador == 0 ) {
			soma_dos_divisores += contador;
		}
	}
	return soma_dos_divisores;
}


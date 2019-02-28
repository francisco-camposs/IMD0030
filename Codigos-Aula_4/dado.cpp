#include <random>
#include "dado.h"

dado::dado(int param):rd(), gen(rd()), dis(1, param) {
	valor = std::round(dis(gen));
	}

int dado::jogar() {
	valor = std::round(dis(gen));
	return valor;
}

int dado::getValor() {
	return valor;
}
#include <iostream>
#include <cstdlib>
#include "dado.h"

int main(int argc, char const *argv[])
{
	dado meu_dado((atoi(argv[2])));
	for (int i=0;i<atoi(argv[1]);++i) {
		std::cout << meu_dado.jogar() << std::endl;
	}
	return 0;
}
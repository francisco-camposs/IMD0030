#include <iostream>
#include <cstring>

using namespace std;
typedef struct
{
	char autor[100];
	char titulo[100];
	int edicao;	
} livro;

int main () {

	livro matematica;
	strcpy(matematica.autor, "Geometria Euclidiana");
	strcpy(matematica.titulo, "Gilberto Gil");
	matematica.edicao = 3;
	return 0;
}
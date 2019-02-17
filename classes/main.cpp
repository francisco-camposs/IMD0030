#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	cachorro toby;
	cout << "Digite o peso de cachorro" << endl;
	cin >> toby.peso;
	cout << "Digite o nome de cachorro" << endl;
	cin >> toby.nome;
	cout << "Digite o latido de cachorro" << endl;
	cin >> toby.latido;

	toby.latir();

	toby.pesado();
 	return 0;
}

class cachorro {
	public:
		int peso;
		char cor[20];
		char nome[20];
		char latido[20];

		void latir (){
			cout << latido << endl;
		}

		void pesado();
};

void cachorro::pesado () {
	if (peso >= 30) {
		cout << "Cachorro gordo" << endl;
	}
	else {
		cout << "cachorro mmagro" << endl;
	}
}
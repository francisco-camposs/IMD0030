#include <iostream>
#include "conjunto.h"

using namespace std;

int main (){

	Conjunto<int> Set;
	for (int i = 0; i < 15; i++)
		Set.add_member(i);

	cout << Set;

	Conjunto<int> Set2;
	for (int i = 10; i <= 23; i++){
		Set2.add_member(i);
		Set2.add_member(i);
	}

	cout << Set2;
	cout << "União: " <<Set + Set2;
	cout << "Interseccao: " << Set / Set2;
	cout << "Diferença simples: " << Set-Set2;
	cout << "Diferença Simétrica: " << Set % Set2;
	cout << "Depois da operação: " << Set;
	cout << "Depois da operação: " << Set2;

	// cout << "Soma: " << Set+Set2;
	return 0;
}
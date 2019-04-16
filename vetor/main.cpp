#include <iostream>
#include "vetor.h"

using namespace std;

int main (){

	Conjunto<int> Set;
	for (int i = 0; i < 15; i++)
		Set.add_member(i);

	cout << Set;

	Conjunto<int> Set2;
	for (int i = 10; i <= 20; i++)
		Set2.add_member(i);

	cout << Set2;
	cout << "Subtração: " << (Set-Set2);
	cout << "Depois da operação: " << Set;
	cout << "Depois da operação: " << Set2;

	// cout << "Soma: " << Set+Set2;
	return 0;
}
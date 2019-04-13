#include <iostream>
#include "vetor.h"

using namespace std;

int main (){

	Conjunto<int> Set;
	for (int i = 0; i < 15; i++)
		Set.add_member(i);

	cout << Set;

	Conjunto<int> Set2;
	for (int i = 15; i <= 20; i++)
		Set2.add_member(i);

	cout << Set2;
	
	Set.add_member(Set2);

	cout << Set;

	Set.print();

	return 0;
}
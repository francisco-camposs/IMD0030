#include <iostream>

using namespace std;

int soma (int num1, int num2){
	cout << "Soma de números inteiros." << endl;
	return num1 + num2;
}

int soma (float num1, float num2){
	cout << "Soma de números reais pequenos." << endl;
	return num1 + num2;
}

// int soma (double num1, double num2){
// 	cout << "Soma de números reais grandes." << endl;
// 	return num1 + num2;
// }

int main (){

	cout << soma(1,2)<< endl;
	cout << soma(-1.1, 1.3)<< endl;
	// cout << soma(1.732645876, 45.546546567) << endl;

	return 0;
}
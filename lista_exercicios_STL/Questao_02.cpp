#include <iostream>
#include <set>

using namespace std;

template <typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator=' '){
	typename TContainer::iterator it;
	it = collection.begin();
	cout << label;
	for (;it != collection.end(); it++){
		cout << *it;
		if (distance(it,collection.end()) != 1){
			cout << separator;
		}

	}
	cout << endl;
};


int main (){
	set<int> numeros;
	for(int i = 0; i < 10; i++){
		numeros.insert(i*10);
	}

	print_elements(numeros,"Set: ", ';');
	print_elements(numeros,"CSV set: ", ',');
	
	return 0;
}
#include <iostream>

using namespace std;

class Poligono {
	protected:
		double largura;
		double altura;
	public:
		Poligono(double a, double h) : largura(a), altura(h) {}
		virtual double area() = 0;
};

class Retangulo : public Poligono {
	public:
		Retangulo(double a, double h) : Poligono(a, h) {}
		double area() { return largura * altura; }
};

class Triangulo : public Poligono {
	public:
		Triangulo(double a, double h) : Poligono(a, h) {}
		double area() { return (largura * altura / 2);}
		double m_largura() {return largura;}
};


int main () {
	Poligono* r = new Retangulo(1, 2);
	Poligono* t = new Triangulo(3, 4);
	// Poligono* p = new Poligono(2, 1);

	cout << "Area do retangulo: " << r->area() << endl;
	cout << "Area do triangulo: " << t->area() << endl;
	// cout << "Area do poligono: " << p->area() << endl;
	return 0;
}

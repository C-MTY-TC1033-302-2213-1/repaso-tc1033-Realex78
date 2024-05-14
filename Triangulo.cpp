#include "Triangulo.hpp"

// Constructores
Triangulo::Triangulo() {
	vertice1 = Punto(0,0);
	vertice2 = Punto(50,30);
	vertice3 = Punto(25,10);
}

Triangulo::Triangulo(Punto _v1, Punto _v2, Punto _v3) {
	vertice1 = _v1;
	vertice2 = _v2;
	vertice3 = _v3;
}


// Métodos modificadores - setters
void Triangulo::setVertice1(Punto _v1) {
	vertice1 = _v1;
}

void Triangulo::setVertice2(Punto _v2) {
	vertice2 = _v2;
}

void Triangulo::setVertice3(Punto _v3) {
	vertice3 = _v3;
}


// Métodos de acceso - getters
Punto Triangulo::getVertice1() {
	return vertice1;
}

Punto Triangulo::getVertice2() {
	return vertice2;
}

Punto Triangulo::getVertice3() {
	return vertice3;
}


// Otros métodos
double Triangulo::perimetro() {
	return vertice1.calculaDistancia(vertice2) + vertice2.calculaDistancia(vertice3) + vertice3.calculaDistancia(vertice1);
}

double Triangulo::area() {
	return (1.0 / 2.0) * 
		abs(((vertice1.getX() * vertice2.getY()) + (vertice2.getX() * vertice3.getY()) + (vertice3.getX() * vertice1.getY())) 
		- ((vertice1.getX() * vertice3.getY()) + (vertice3.getX() * vertice2.getY()) + (vertice2.getX() * vertice1.getY())));
}

std::string Triangulo::str() {
	return vertice1.str() + ',' + vertice2.str() + ',' + vertice3.str();
}

#ifndef Triangulo_hpp
#define Triangulo_hpp

#include "Punto.hpp"
#include <string>
#include <math.h>

class Triangulo {
	private:
		Punto vertice1;
		Punto vertice2;
		Punto vertice3;

	public:
		// Constructores
		Triangulo();
		Triangulo(Punto _v1, Punto _v2, Punto _v3);

		// Métodos modificadores - setters
		void setVertice1(Punto _v1);
		void setVertice2(Punto _v2);
		void setVertice3(Punto _v3);

		// Métodos de acceso - getters
		Punto getVertice1();
		Punto getVertice2();
		Punto getVertice3();

		// Otros métodos
		double perimetro();
		double area();
		std::string str();
};

#endif
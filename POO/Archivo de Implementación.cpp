#include "complejos_cuaterniones.h"
#include <cmath>

using namespace std;

Complejo::Complejo(double r, double i) : real(r), imag(i) {} //Constructor Complejos

Complejo Complejo::sumar(const Complejo &s) const {
	
	return Complejo(real + s.real, imag + s.imag); //Función que suma complejos
	
}

Complejo Complejo::restar(const Complejo &s) const {
	
	return Complejo(real - s.real, imag - s.imag); //Función que resta complejos
	
}

Complejo Complejo::multiplicar(const Complejo &s) const {
	
	double r = real*s.real - imag*s.imag; 
	double i = real*s.imag + imag*s.real; //Función que multiplica complejos
	return complejo(r, i);
	
}

Complejo Complejo::dividir(const Complejo &s) const {

	double denom = s.real*s.real + s.imag*s.imag;
	double r = (real*s.real + imag*s.imag) / denom; 
	double i = (imag*s.real - real*s.imag) / denom; //Función que divide complejos
	return complejo(r, i);

}

void Complejo::imprimir() const {

	cout << real << (imag >= 0 ? " + " : " - ") << fabs(imag) << "i" << endl; //Función que imprime el numero complejo
		
}

Cuaternion::Cuaternion(double w, double x, double y, double z) : a(w), b(x), c(y), d(z) {} //Constructor Cuaternión

Cuaternion Cuaternion::sumar(const Cuaternion &q) const {

	return Cuaternion(a + q.a, b + q.b, c + q.c, d + q.d); //Función que suma cuaterniones
	
}

Cuaternion Cuaternion::restar(const Cuaternion &q) const {

	return Cuaternion(a - q.a, b - q.b, c - q.c, d - q.d); //Función que resta cuaterniones

}

Cuaternion Cuaternion::multiplicar(const Cuaternion &q) const {

	double w = a * q.a - b * q.b - c * q.c - d * q.d;
    double x = a * q.b + b * q.a + c * q.d - d * q.c;
    double y = a * q.c - b * q.d + c * q.a + d * q.b; //Función que multiplica cuaterniones
    double z = a * q.d + b * q.c - c * q.b + d * q.a;
    return Cuaternion(w, x, y, z);

}

Cuaternion Cuaternion::conjugado() const {
	
    return Cuaternion(a, -b, -c, -d); //Función que calcula el conjugado de un cuaternion
    
}

double Cuaternion::norma() const {
	
    return std::sqrt(a * a + b * b + c * c + d * d); //Función que calcula la norma de un cuaternion
    
}

Cuaternion Cuaternion::inversa() const {
	
    double normSquared = a * a + b * b + c * c + d * d;
    return Cuaternion(a / normSquared, -b / normSquared, -c / normSquared, -d / normSquared); //Función que calcula la inversa de un cuaternion

}

void Cuaternion::imprimir() const {
	//Función que imprime el cuaternion
    cout << a << (b >= 0 ? " + " : " - ") << fabs(b) << "i " << (c >= 0 ? " + " : " - ") << fabs(c) << "j " << (d >= 0 ? " + " : " - ") << fabs(d) << "k "<< endl; 
    
}


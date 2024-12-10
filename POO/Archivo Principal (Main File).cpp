#include "complejos_cuaterniones.h"
using namespace std; 

int main() {
   
    //Parte de Numeros Complejos
    double real1, imag1, real2, imag2;

    cout << "Ingrese el primer número complejo (parte real e imaginaria): ";
    cin >> real1 >> imag1;

    cout << "Ingrese el segundo número complejo (parte real e imaginaria): ";
    cin >> real2 >> imag2;

    Complejo c1(real1, imag1), c2(real2, imag2);

    cout << endl << "Operaciones con números complejos:" << endl;
    Complejo sumaC = c1.sumar(c2);
    Complejo restaC = c1.restar(c2);
    Complejo multC = c1.multiplicar(c2);
    Complejo divC = c1.dividir(c2);

    cout << "c1: "; c1.imprimir();
    cout << "c2: "; c2.imprimir();
    cout << "Suma: "; sumaC.imprimir();
    cout << "Resta: "; restaC.imprimir();
    cout << "Multiplicación: "; multC.imprimir();
    cout << "División: "; divC.imprimir();

    //Parte de Cuaterniones
    double a1, b1, c1_q, d1;
    double a2, b2, c2_q, d2;

    cout << endl << "Ingrese el primer cuaternión (a b c d): ";
    cin >> a1 >> b1 >> c1_q >> d1;

    cout << "Ingrese el segundo cuaternión (a b c d): ";
    cin >> a2 >> b2 >> c2_q >> d2;

    Cuaternion q1(a1, b1, c1_q, d1), q2(a2, b2, c2_q, d2);

    cout << endl << "Operaciones con cuaterniones:" << endl;
    Cuaternion sumaQ = q1.sumar(q2);
    Cuaternion restaQ = q1.restar(q2);
    Cuaternion multQ = q1.multiplicar(q2);
    Cuaternion conjQ = q1.conjugado();
    double normaQ = q1.norma();
    Cuaternion invQ = q1.inversa();

    cout << "q1: "; q1.imprimir();
    cout << "q2: "; q2.imprimir();
    cout << "Suma: "; sumaQ.imprimir();
    cout << "Resta: "; restaQ.imprimir();
    cout << "Multiplicación: "; multQ.imprimir();
    cout << "Conjugado de q1: "; conjQ.imprimir();
    cout << "Norma de q1: " << normaQ << endl;
    cout << "Inversa de q1: "; invQ.imprimir();

    return 0;
}


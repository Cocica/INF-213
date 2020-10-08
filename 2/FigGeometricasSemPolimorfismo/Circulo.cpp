
#include "Circulo.h"
#include <iostream>

using namespace std;

const float PI = 3.141592653589;

Circulo::Circulo(double x, double y, double raio,
                 int e, int c, int t) : FigBase(x, y, e, c, t) {
    setRaio(raio);
}

double Circulo::getRaio() const {
    return raio;
}

void Circulo::setRaio(double r) {
    raio = r;
}

float Circulo::area() const {
    return PI * raio * raio;
}

float Circulo::perimetro() const {
    return 2 * PI * raio;
}

void Circulo::imprime() const {
    cout << "--- [Circulo] ---" << endl;
    this->FigBase::imprime();
    cout << " raio=" << this->getRaio() << endl;
    cout << " area = " << this->area() << " perimetro = " << this->perimetro() << endl;
}

void Circulo::ler() {
    double r;
    cout << "Insira os dados: \n";
    this->FigBase::ler();
    cout << "Raio = ";
    cin >> r;
    this->setRaio(r); 

}


ostream& operator<< (ostream &out, const   Circulo &c) {
    c.imprime();
   return out;
}

istream& operator>> (istream &cin, Circulo &c) {
    c.ler();
    return cin;
}

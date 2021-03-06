#include "Circulo.h"
#include<iostream>
using namespace std;

Circulo::Circulo (double x,double y,double raio,int espessura,int cor,int tipo):FigBase(x,y,espessura,cor,tipo){
  setRaio(raio);

}

double Circulo::getRaio()const {
  return raio;
}

void Circulo::setRaio(double r) {
  raio = r;
}

float Circulo::area() const{
  return 3.141592653589 * raio * raio;
}

float Circulo::perimetro() const{
  return 2 * 3.141592653589 * raio;
}

void Circulo::imprime() const {
  
    FigBase::imprime();
    cout << "--- [Circulo] ---" << endl;
    cout << " raio = " << getRaio() << endl; 
    cout << " area = " << area() << " perimetro = " << perimetro() << endl; 
    cout << "--- [--------] ---" << endl<<endl;
}
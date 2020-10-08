#include "Retangulo.h"
#include <iostream>
using namespace std;

Retangulo::Retangulo(double x,double y,double largura,double altura,int espessura,int cor,int tipo):FigBase(x,y,espessura,cor,tipo){
  setLargura(largura);
  setAltura(altura);
}

double Retangulo::getLargura() const{
  return largura;
}

void Retangulo::setLargura(double l){
  largura = l;
}

double Retangulo::getAltura() const{
  return altura;
}

void Retangulo::setAltura(double a){
  altura = a;
}

float Retangulo::area() const{
  return largura*altura;
}

float Retangulo::perimetro() const{
  return 2*(altura+largura);
}

void Retangulo::imprime() const {
    FigBase::imprime();
    cout << "--- [Retangulo] ---" << endl;
    cout << " largura = " << getLargura() << " altura = " << getAltura() << endl;  
    cout << " area = " << area() << " perimetro = " << perimetro() << endl; 
    cout << "--- [-------] ---" << endl<<endl;
}
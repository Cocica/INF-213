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

void Retangulo::le(Retangulo &obj) {
  FigBase::le(obj);
  double c1,c2;
  cin >> c1 >> c2;
  obj.setLargura(c1);
  obj.setAltura(c2);

}

void Retangulo::imprime() const {
    FigBase::imprime();
    cout << "--- [Retangulo] ---" << endl;
    cout << " largura = " << getLargura() << " altura = " << getAltura() << endl;  
    cout << " area = " << area() << " perimetro = " << perimetro() << endl; 
    cout << "--- [-------] ---" << endl<<endl;
}

ostream& operator<<(ostream &out, const Retangulo &obj){
    obj.imprime();
    return out;
}

istream& operator>>(istream &in,Retangulo &obj){
    obj.le(obj);
    return in;
}
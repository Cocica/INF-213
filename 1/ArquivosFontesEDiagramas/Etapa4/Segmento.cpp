#include "Segmento.h"
#include <iostream>
#include <cmath>
using namespace std;

Segmento::Segmento(double x, double y,double x2, double y2, int espessura,int cor,int tipo):FigBase(x,y,espessura,cor,tipo){
  setX2(x2);
  setY2(y2);
}

double Segmento::getX2() const{
  return x2;
}

void Segmento::setX2(double x2){
  this->x2 = x2;
}

double Segmento::getY2 () const{
  return y2;
}

void Segmento::setY2(double y2){
  this->y2 = y2;
}

float Segmento::area() const{
  return 0;
}

float Segmento::perimetro() const{
  float resp = sqrt (((x2-getX())*(x2-getX()))+((y2-getY())*(y2-getY())));
  return resp;
}

void Segmento::le(Segmento &obj) {
  FigBase::le(obj);
  double c1,c2;
  cin >> c1 >> c2;
  obj.setX2(c1);
  obj.setY2(c2);

}

void Segmento::imprime() const{
    FigBase::imprime();
    cout << "--- [Segmento] ---" << endl;
    cout << " x2 = " << getX2() << " y2 = " << getY2() << endl; 
    cout << " area = " << area() << " perimetro = " << perimetro() << endl; 
    cout << "--- [-------] ---" << endl<<endl;
}

ostream& operator<<(ostream &out,const Segmento &obj){
    obj.imprime();
    return out;
}
istream& operator>>(istream &in,Segmento &obj){
    obj.le(obj);
    return in;
}
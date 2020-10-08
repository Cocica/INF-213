#include "FigBase.h"
#include <iostream>
using namespace std;

FigBase::FigBase(double x,double y,int espessura,int cor,int tipo){
  setX(x);
  setY(y);
  setEspessura(espessura);
  setCor(cor);
  setTipo(tipo);
}

double FigBase::getX() const {
  return x;
}

void FigBase::setX(double x){
  this->x = x;
}

double FigBase::getY() const {
  return y;
}

void FigBase::setY(double y) {
  this->y = y;
}

int FigBase::getEspessura() const{
  return espessura;
}

void FigBase::setEspessura(int esp){
  espessura = (esp < 1 || esp > 5) ? 1:esp;
}

int FigBase::getCor() const{
  return cor;
}

void FigBase::setCor (int c){
  cor = (c < 1 || c > 5) ? 1:c;
}

int FigBase::getTipo () const {
  return tipo;
}

void FigBase::setTipo (int t){
  tipo = (t < 1 || t > 3) ? 1:t;
}

void FigBase::le(FigBase &obj){
  double c1,c2;
  int c3,c4,c5;

  cin >> c1 >> c2;
  cin >> c3 >> c4 >> c5;

  obj.setX(c1);
  obj.setY(c2);
  obj.setEspessura(c3);
  obj.setCor(c4);
  obj.setTipo(c5);
}

void FigBase::imprime() const {

    cout << "--- [FiguraBase] ---" << endl;
    cout << " Atributos da linha: " << endl;
    cout << "     Espessura = " << getEspessura() << endl;
    cout << "     Cor       = " << getCor() << endl;
    cout << "     Tipo      = " << getTipo() << endl;          
    cout << " x = " << getX() << " y = " << getY() << endl;
}
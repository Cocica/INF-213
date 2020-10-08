#ifndef RETANGULO_H
#define RETANGULO_H
#include "FigBase.h"
#include <iostream>
using namespace std;

class Retangulo: public FigBase
{
private:
  double largura,altura;
public:
  Retangulo(double=0,double=0,double=0,double=0,int=0,int=0,int=0);

  double getLargura() const;
  void setLargura(double);

  double getAltura() const;
  void setAltura (double);

  float area() const;
  float perimetro() const;

  void imprime () const;
  void le(Retangulo &);

  friend ostream& operator<<(ostream &out,const Retangulo &obj);
  friend istream& operator>>(istream &in,Retangulo &obj);

};

#endif
 
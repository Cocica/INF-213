#ifndef RETANGULO_H
#define RETANGULO_H
#include "FigBase.h"

class Retangulo: public FigBase
{
private:
  double largura,altura;
public:
  Retangulo(double,double,double,double,int,int,int);

  double getLargura() const;
  void setLargura(double);

  double getAltura() const;
  void setAltura (double);

  float area() const;
  float perimetro() const;

  void imprime () const;

};

#endif
 
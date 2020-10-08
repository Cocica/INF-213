#ifndef CIRCULO_H
#define CIRCULO_H
#include "FigBase.h"
#include <iostream>
using namespace std; 

class Circulo:public FigBase{

  private:
    double raio;
  
  public:
    Circulo(double=0,double=0,double=0,int=0,int=0,int=0);

    double getRaio() const;
    void setRaio(double);

    float area() const;
    float perimetro()const;
    void imprime() const;
    void le(Circulo&);

    friend ostream& operator<<(ostream &,const Circulo &);
    friend istream& operator>>(istream &,Circulo &);

};

#endif
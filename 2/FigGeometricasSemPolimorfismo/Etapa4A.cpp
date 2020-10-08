#include <iostream>
using namespace std;

#include "FigBase.h"
#include "Retangulo.h"
#include "Circulo.h"
#include "Segmento.h"
#include <typeinfo>
      
int main() {

  FigBase *v[3];
  Circulo a (5, 2, 4, 2, 2, 2);
  Retangulo b (13, 7, 2, 4, 1, 1, 1);
  Segmento c (3, 7, 8, 5, 3, 3, 3);

  v[0] = &b;
  v[1] = &a;
  v[2] = &c;

  for (int i=0;i<3;i++){
    cout << "Objeto " << i+1 << " eh do tipo " << typeid(*v[i]).name() << endl;
    cout << "Perimetro: " << v[i]->perimetro() << endl;
    cout << "Area: " << v[i]->area() << endl;
    cout << " \n";
  }
  
  return 0;  
}
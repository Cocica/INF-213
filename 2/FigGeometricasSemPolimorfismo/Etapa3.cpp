#include "FigBase.h"
#include "Circulo.h"
#include "Retangulo.h"
#include "Segmento.h"
using namespace std;
int main () {

  FigBase *v[5];
  Circulo c1,c2;
  Retangulo r1;
  Segmento s1,s2;

  v[0] = &c1;
  v[1] = &c2;
  v[2] = &r1;
  v[3] = &s1;
  v[4] = &s2;

  for (int i=0;i<5;i++){
    cin >> *(v[i]); 
  }

  
  for (int i=0;i<5;i++){
    cout << *(v[i]); 
  }


  return 0;
}
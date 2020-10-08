#include "Conjunto2.h"
#include <iostream>


int main() {
  int n;
  cin >> n;
  Conjunto<int> A(n);
  Conjunto<int> B(n);
  Conjunto<int> C;

  int x;
  for (int i=0;i<n;i++){
    cin >> x;
    A.insere(x);
  }
  for (int i=0;i<n;i++){
    cin >> x;
    B.insere(x);
  }
  C = A+B;

  cout << C.pertence(10);

  return 0;
}

//4 seg com 20000, 0.589 com -O3
//16 segundos com 40000, 2.307 com -03
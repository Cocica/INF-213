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
//  B.insere(x);
  }
  C = A+B;

  cout << C.pertence(10);

  return 0;
}

//0.005s 0.030 0.040 0.191 0.615 2.459 9.898
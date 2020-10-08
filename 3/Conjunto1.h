#ifndef CONJUNTO_H
#define CONJUNTO_H
#include <iostream>
using namespace std;

template<class T> //Sinalizando que existe a classe conjunto para o operator << e >>
class Conjunto;

template<class T> //Mostrando que existe o operador para aplicarmos friend la dentro
ostream &operator<<(ostream &,const Conjunto<T> &);

template<class T>
istream &operator>>(istream &,Conjunto<T> &);

template <class T>
class Conjunto {

  friend ostream &operator<< <T>(ostream &, const Conjunto <T> &);
  friend istream &operator>> <T>(istream &, Conjunto <T> &);

  private:

    T *elementos;
    int num_elementos;
    int tam_array;
  
  public:
    Conjunto(int = 10);
    Conjunto (const Conjunto &);
    ~Conjunto();
    bool pertence (const T &) const;
    bool insere (const T &);
    int numelementos() const;
    bool operator==(const Conjunto &) const;
    Conjunto & operator=(const Conjunto &);

};

template<class T>
ostream &operator<<(ostream &out,const Conjunto<T> &obj){ //saida
  out << "{";

  for(int i=0;i<obj.num_elementos;i++){ 
    if(i != obj.num_elementos-1) out << obj.elementos[i] << ",";
    else out << obj.elementos[i];
  }

  out << "}";
  return out;
}

template<class T>
istream &operator>>(istream &in,Conjunto <T> &obj){
  T temp;
  while(in >> temp){
    obj.insere(temp);
  }
  return in;
}

template <class T>
Conjunto<T>::Conjunto(int tam):tam_array(tam){
  elementos = new T[tam_array];
  num_elementos = 0;
}

template <class T>
Conjunto<T>::Conjunto(const Conjunto &obj){
    elementos=NULL;
    num_elementos=0;
    *this=obj; //usar operador igual para copiar
}

template <class T>
Conjunto<T>::~Conjunto(){
  delete [] elementos;
}

template <class T>
bool Conjunto<T>::pertence(const T &param) const{
  for (int i=0;i<num_elementos;i++){
    if (elementos[i] == param) return true;
  }
  return false;
}

template <class T>
bool Conjunto<T>::insere(const T &param){
  if(pertence(param)) return false;

  else if (num_elementos < tam_array){
    elementos[num_elementos] = param;
    num_elementos++;
    return true;
  }

  else return false;
}

template <class T>
int Conjunto<T>::numelementos() const{
  return num_elementos;
}

template<class T>
Conjunto<T> & Conjunto<T>::operator=(const Conjunto &obj){
  if (this == &obj) return *this;
  delete [] elementos;
  tam_array = obj.tam_array;
  num_elementos = obj.num_elementos;
  elementos = new T[tam_array];

  for(int i=0;i<tam_array;i++){
    elementos[i] = obj.elementos[i];
  }

  return *this;
}

template <class T>
bool Conjunto<T>::operator==(const Conjunto &obj) const{
  if (this == &obj) return true; //verifica os endereços

  bool igual = true;

  for (int i=0; i<obj.num_elementos;i++)
    if(!pertence(obj.elementos[i])) igual = false; 
  
    if (!igual) return false;

    else {
      if (num_elementos != obj.num_elementos) return false;
      else return true;
    }
  }

#endif
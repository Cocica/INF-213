#ifndef DATA_H
#define DATA_H
using namespace std;
#include <iostream>
    class Data{
        public:
            Data();
            Data(const Data &);
            void setDia(int dia);
            void setMes(int mes);
            void setAno(int ano);
            int getDia()const;
            int getMes()const;
            int getAno()const;
            int compData(const Data &) const;
            int difDias(const Data&) const;
            void imprime()const;
            Data& operator=(const Data&);
            friend ostream& operator<<(ostream &, const Data &);
            friend istream& operator>>(istream &, Data &);

        private:
            int dia,mes,ano;
    };
#endif
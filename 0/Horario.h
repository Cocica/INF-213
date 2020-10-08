#ifndef HORARIO_H
#define HORARIO_H

#include <iostream>
using namespace std;

    class Horario{
        private:
            int hora,minuto,segundo;

        public:
            Horario();
            Horario(const Horario &);
            void setHora(int);
            void setMinuto(int);
            void setSegundo(int);
            int getHora()const;
            int getMinuto()const;
            int getSegundo()const;
            int compHorario(const Horario &) const;
            int difSegundos(const Horario&) const;
            void imprime()const;
            friend ostream& operator<<(ostream &, const Horario &); 
            friend istream& operator>>(istream &, Horario &);
            Horario &operator=(const Horario &);
    };
#endif
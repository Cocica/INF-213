#ifndef AGENDA_H
#define AGENDA_H
#include "Data.h"
#include "Horario.h"
#include <string>
#include <iostream>

using namespace std;

class ItemAgenda{
    public:
        ItemAgenda();
        ItemAgenda(const string &, const Data &, const Horario &);
        ItemAgenda(const ItemAgenda &);
        void setDesc(const string &);
        void setData(const Data &);
        void setHorario(const Horario &);
        const string & getDesc() const;
        const Data & getData() const;
        const Horario & getHorario() const;

    private:
        string descricao;
        Data d;
        Horario h;
};
class Agenda{
    public:
        Agenda();
        void inserirItem(const ItemAgenda &);
        void compromissosData(const Data &) const;
    private:
        static int itensCriados; 
        ItemAgenda itens[1000];
};

#endif
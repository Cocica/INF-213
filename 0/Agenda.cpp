#include "Agenda.h"

ItemAgenda::ItemAgenda(){

}
ItemAgenda::ItemAgenda(const string &desc, const Data &dt, const Horario &hr){
    descricao = desc;
    d = dt;
    h = hr;
}
ItemAgenda::ItemAgenda(const ItemAgenda &obj){
    this->descricao = obj.descricao;
    this->d = obj.d;
    this->h = obj.h;
}
void ItemAgenda::setDesc(const string &obj){
    descricao = obj;
}
void ItemAgenda::setData(const Data &obj){
    d=obj;
}
void ItemAgenda::setHorario(const Horario &obj){
    h=obj;
}
const string & ItemAgenda::getDesc()const{
    return descricao;
}

const Data & ItemAgenda::getData() const{
    return d;
}

const Horario & ItemAgenda::getHorario() const{
    return h;
}

//----------//

int Agenda::itensCriados = 0;

Agenda::Agenda(){   
}

void Agenda::inserirItem(const ItemAgenda &obj){
    itens[itensCriados].setDesc(obj.getDesc());
    itens[itensCriados].setData(obj.getData());
    itens[itensCriados].setHorario(obj.getHorario());
    itensCriados++;
}
void Agenda::compromissosData(const Data &obj) const{
    for(int i=0 ; i<itensCriados; i++){
        if((itens[i].getData()).difDias(obj) == 0){ //compara cada item criado com o parametro passado
            (itens[i].getHorario()).imprime(); //imprime a hora desse objeto
            printf(" %s\n",itens[i].getDesc().c_str()); //c_str transforma a string pra forma que funciona com pritf
        }
    }
}
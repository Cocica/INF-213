#include "Horario.h"

Horario::Horario(){
    setHora(0);
    setMinuto(0);
    setSegundo(0);
}
Horario::Horario(const Horario &obj){
    this->setHora(obj.hora);
    this->setMinuto(obj.minuto);
    this->setSegundo(obj.segundo);
}
void Horario::setHora(int h){
    if(h>=0 && h<24){
        hora = h;
    }else{
        if(h<0){
            hora = 0;
        }else{
            hora = 23;
        }
    }
}
void Horario::setMinuto(int m){
    if(m>=0 && m<60){
        minuto = m;
    }else{
        if(m<0){
            minuto = 0;
        }else{
            minuto = 59;
        }
    }
}
void Horario::setSegundo(int s){
    if(s>=0 && s<60){
        segundo = s;
    }else{
        if(s<0){
            segundo = 0;
        }else{
            segundo = 59;
        }
    }
}

int Horario::getHora()const{
    return hora;
}
int Horario::getSegundo()const{
    return segundo;
}
int Horario::getMinuto()const{
    return minuto;
}

int Horario::compHorario(const Horario &obj) const{
    
    if(this->hora != obj.hora){
        if(this->hora > obj.hora){
            return 1;
        }else{
            return -1;
        }
    }else{
        if(this->minuto != obj.minuto){
            if(this->minuto > obj.minuto){
                return 1;
            }else{
                return -1;
            }
        }else{
            if(this->segundo != obj.minuto){
                if(this->segundo > obj.segundo){
                    return 1;
                }else{
                    return -1;
                }
            }else{
                return 0;
            }

        }
    }
}
int Horario::difSegundos(const Horario &obj)const{
    int dif = 0;
    Horario *v = new Horario [2];
    if(this->compHorario(obj) == 0){
        return 0;
    }else{
        if(this->compHorario(obj) == 1){
            v[1] = (*this); 
            v[0] = obj;
        }else{
            v[0] = (*this); 
            v[1] = obj;
        }
    }
    dif = (v[1].hora - v[0].hora)*(60*60) + (v[1].minuto - v[0].minuto)*60 + (v[1].segundo - v[0].segundo);
    delete []v;
    return dif;
}

void Horario::imprime()const{
    printf("%d %d %d",hora,minuto,segundo);
}

Horario& Horario::operator=(const Horario &obj){
    if (this==&obj) return *(this);
    this->hora = obj.hora;
    this->minuto = obj.minuto;
    this->segundo = obj.segundo;
    return *(this);
}
ostream& operator<< (ostream& out, const Horario &obj){
    out << obj.getHora()<<" "<< obj.getMinuto()<<" "<< obj.getSegundo();
    return out; 
}
istream& operator>> (istream& in, Horario &obj){
    in >> obj.hora >> obj.minuto >> obj.segundo;
    obj.setHora(obj.hora);
    obj.setMinuto(obj.minuto);
    obj.setSegundo(obj.segundo);
    return in; 
}
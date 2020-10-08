#include "Data.h"
Data::Data(){
    setDia(1);
    setMes(1);
    setAno(2018);
}
Data::Data(const Data &obj){
    this->setDia(obj.dia);
    this->setMes(obj.mes);
    this->setAno(obj.ano);
}
int Data::getDia()const{
    return dia;
}
int Data::getMes()const{
    return mes;
}
int Data::getAno()const{
    return ano;
}
int Data::compData(const Data &obj) const{
    if(this->ano != obj.ano){
        if(this->ano > obj.ano){
            return 1;
        }else{
            return -1;
        }
    }else{
        if(this->mes != obj.mes){
            if(this->mes > obj.mes){
                return 1;
            }else{
                return -1;
            }
        }else{
            if(this->dia!= obj.dia){
                if(this->dia > obj.dia){
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
void Data::setDia(int d){
    if(d>=1 && d<=30){
        dia = d;
    }else{
        if(d<1){
            dia=1;
        }else{
            dia=30;
        }
    }
}
void Data::setMes(int m){
    if(m>=1 && m<=12){
        mes = m;
    }else{
        if(m<1){
            mes=1;
        }else{
            mes=12;
        }
    }
}
void Data::setAno(int a){
    if(a>=2018 && a<=2020){
        ano = a;
    }else{
        if (a<2018){
            ano = 2018;
        }else{
            ano = 2020;
        }
    }
}
int Data::difDias(const Data & obj)const{
    int dif = 0;
    Data *v = new Data [2];
    if(this->compData(obj) == 0){
        return 0;
    }else{
        if(this->compData(obj) == 1){
            v[1] = (*this); 
            v[0] = obj;
        }else{
            v[0] = (*this) ; 
            v[1] = obj;
        }
    }
    dif = ((v[1].ano - v[0].ano) * 365 + (v[1].mes - v[0].mes ) * 30 + (v[1].dia - v[0].dia) );
    delete[]v;
    return dif;
}
void Data::imprime()const{
    printf("%d %d %d", this->dia, this->mes, this->ano);
}
Data& Data::operator=(const Data &obj){
    if (this==&obj) return *(this);
    this->dia = obj.dia;
    this->mes = obj.mes;
    this->ano = obj.ano;
    return *(this);
}
ostream& operator<< (ostream& out, const Data &obj){
    out << obj.getDia()<<" "<< obj.getMes()<<" "<< obj.getAno();
    return out; 
}
istream& operator>> (istream& in, Data &obj){
    in >> obj.dia >> obj.mes >> obj.ano;
    obj.setDia(obj.dia);
    obj.setMes(obj.mes);
    obj.setAno(obj.ano);
    return in; 
}
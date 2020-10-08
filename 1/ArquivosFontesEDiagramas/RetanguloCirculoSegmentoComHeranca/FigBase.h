#ifndef FIG_BASE_H 
#define FIG_BASE_H

class FigBase {
  private:
    double x,y;
    int espessura,cor,tipo;

  public:
    FigBase(double,double,int,int,int);
    
    double getX() const;
    void setX(double);

    double getY() const;
    void setY(double);

    int getEspessura () const;
    void setEspessura(int);

    int getCor() const;
    void setCor(int);

    int getTipo() const;
    void setTipo(int);

    void imprime () const;
};

#endif
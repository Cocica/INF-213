#ifndef FIG_BASE_H 
#define FIG_BASE_H

class FigBase {
  private:
    double x,y;
    int espessura,cor,tipo;

  public:
    FigBase(double=0,double=0,int=0,int=0,int=0);
    
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
    void le(FigBase&);
};

#endif
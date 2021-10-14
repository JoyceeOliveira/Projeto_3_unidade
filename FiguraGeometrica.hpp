#ifndef FiguraGeometrica_header
#define FiguraGeometrica_header
#include "Sculptor.hpp"
#include  <string>
#include  <sstream>
#include  <fstream>
#include  <iostream>

class FiguraGeometrica{
  protected:
    float r,g,b,a;
  public:
    virtual ~FiguraGeometrica(){}
      //classe abstrata
      //pois possui uma funcao virtual
      //PURA
      virtual void draw(Sculptor &s)=0;
};

#endif //FiguraGeometrica_header

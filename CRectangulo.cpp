//
// Created by Maria Hilda Bermejo on 6/3/20.
//

#include "CRectangulo.h"

tnumero CRectangulo::area()
{
  return largo*ancho;
}

tnumero CRectangulo::perimetro()
{
  return 2*largo + 2*ancho;
}

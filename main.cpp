//-- Dato de entrada: largo, ancho (double)
//-- Dato de Salida : area, perimetro(double)

#include <iostream>
#include "CRectangulo.h"

using namespace std;


int main()
{
  CRectangulo R1;  //-- se crea el objeto invocando al constructor por defecto

  R1.setLargo(100.05);
  R1.setAncho(50.25);
  cout << "El area es : " << R1.area() << "\n";
  cout << "El perimetro es :" << R1.perimetro() << "\n";

  tnumero l,a;
  cout << "Largo : "; cin >> l;
  cout << "Ancho : "; cin >> a;

  CRectangulo R2;
  R2.setLargo(l);
  R2.setAncho(a);
  cout << "Area es : " << R2.area() << "\n";
  cout << "Perimetro es : " << R2.perimetro() << "\n";

  cout << "\n\nTercer objeto \n\n";
  CRectangulo R3(230.67, 123.56);

  cout << "El area es : " << R3.area() << "\n";
  cout << "El perimetro es : " << R3.perimetro() << "\n";

  return 0;
}



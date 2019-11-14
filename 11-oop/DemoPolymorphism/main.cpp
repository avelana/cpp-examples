#include <iostream>
#include "src/Shape.h"
#include "src/Rectangle.h"
#include "src/Triangle.h"
#include "src/Point2D.h"
#include "src/Point3D.h"

class Base {
 public:
  virtual void vvfunc() {}
};

class Derived : public Base {};

int main() {
  /*
   * https://docs.microsoft.com/ru-ru/cpp/cpp/typeid-operator?view=vs-2017
   */
  using namespace std;
  Derived *pd = new Derived;
  Base *pb = pd;
  cout << typeid(pb).name() << endl;   //prints "class Base *"
  cout << typeid(*pb).name() << endl;   //prints "class Derived"
  cout << typeid(pd).name() << endl;   //prints "class Derived *"
  cout << typeid(*pd).name() << endl;   //prints "class Derived"
  delete pd;

  Point2D *cp = new Point3D(3, 4, 5);
  Point3D q(3, 4, 5);
  std::cout << "---\n" << typeid(*cp).name() << "\n---\n";  // результат – class Point2D
  std::cout << "---\n" << typeid(q).name() << "\n---\n";  // результат – class Point3D


  Shape *shape;
  Rectangle rec(10, 7);
  Triangle tri(10, 5);

  // store the address of Rectangle
  shape = &rec;

  // call rectangle area.
  shape->area();

  // store the address of Triangle
  shape = &tri;

  // call triangle area.
  shape->area();

  /*
   * Результат -
Parent class area :
Parent class area :
Причиной неправильного вывода является то, что вызов функции area () устанавливается компилятором один раз как версия,
   определенная в базовом классе. Это называется статическим разрешением вызова функции или статическим связыванием -
   вызов функции фиксируется до выполнения программы. Это также иногда называют ранним связыванием,
   потому что функция area () устанавливается во время компиляции программы.

   Внесите модификацию в программу и в объявление area () в классе Shape добавьте ключевое слово virtual

   После этой небольшой модификации, когда предыдущий пример кода скомпилирован и выполнен, он дает следующий результат -

Rectangle class area: 70
Triangle class area: 25
На этот раз компилятор просматривает содержимое указателя, а не его тип.
   Следовательно, поскольку адреса объектов классов tri и rec хранятся в форме *, вызывается соответствующая функция area ().

   */




  return 0;
}
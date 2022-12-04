#include "src/Child.h"
#include "src/Parent.h"
#include <iostream>

#include "src/A.h"
#include "src/Parent1.h"

using std::cin;
using std::cout;

int main() {
    /** Example 1  */
    cout << "Instantiating Parent:\n";

    //  Parent parent(3);
    //  std::cout << "ID: " << parent.getId() << '\n';
    //
    //  std::cout << "Instantiating Child:\n";
    //  Child child(5.8,7);
    //  std::cout << "ID: " << child.getId() << '\n';
    //  std::cout << "Value: " << child.getValue() << '\n';

    /** Example 2  */
    //  std::cout << "Constructing A: \n";
    //  A objA;
    //
    //  std::cout << "Constructing B: \n";
    //  B objB;
    //
    //  std::cout << "Constructing C: \n";
    //  C objC;
    //
    //  std::cout << "Constructing D: \n";
    //  D objD;


    // C c(7, 5.4, 'D');

    /** Example 3  */
    //  parent.val_public_ = 1; // разрешено: доступ к открытым членам класса извне
    ////  parent.val_private_ = 2; // запрещено: доступ к закрытым членам класса извне
    ////  parent.val_protected_ = 3; // запрещено: доступ к защищённым членам класса извне
    //
    //  std::cout << parent.toString();
    //  std::cout <<  child.toString();

    Child1 child1(9);

    // не сработает, поскольку m_value был переопределён как private
    // std::cout << child1.value_;

    // не сработает, поскольку getValue() удален
    //  std::cout << child1.getValue();
    // СРАБОТАЕТ ЧЕРЕЗ РОДИТЕЛЬСКИЙ МЕТОД
    std::cout << child1.Parent1::getValue();


    Child child2(7);
    std::cout << child2.toString();

    //  // Используя Виртуальные ф-ции
    //  Child child2(7);
    //  std::cout << "child is a " << child2.getName() << " and has value_ " << child2.getValue() <<
    //  '\n';
    //
    //  Parent &ref = child2;
    //  std::cout << "ref is a " << ref.getName() << " and has value_ " << ref.getValue() << '\n';
    //
    //  Parent *ptr = &child;
    //  std::cout << "ptr is a " << ptr->getName() << " and has value_ " << ptr->getValue() << '\n';


    return 0;
}
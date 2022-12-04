#include <iostream>
#include <vector>

using namespace std;

class Parent {
protected:
    int value_;

public:
    Parent(int value) : value_(value) { }

    virtual const char* getName() const { return "Parent"; }

    int getValue() const { return value_; }
};

class Child : public Parent {

protected:
    std::string name_;

public:
    Child(int value) : Parent(value) { }

    Child(int value, std::string name) : Parent(value), name_(name) { }

    // const std::string& getName() { return name_; }

    virtual const char* getName() const { return "Child"; }
};

Parent* getObject(bool isReturnChild) {
    if (isReturnChild)
        return new Child(1, "Ivanov");
    else
        return new Parent(2);
}

int main() {
    Child child(7);
    std::cout << "child is a " << child.getName() << " and has value_ " << child.getValue() << '\n';

    //  Parent &ref = child;
    //  std::cout << "ref is a " << ref.getName() << " and has value_ " << ref.getValue() << '\n';
    //
    //  Parent *ptr = &child;
    //  std::cout << "ptr is a " << ptr->getName() << " and has value_ " << ptr->getValue() << '\n';

    //  Parent parent = child; // что произойдёт здесь?
    //  std::cout << "parent is a " << parent.getName() << " and has value_ " << parent.getValue()
    //  << '\n';
    //

    Parent* p = getObject(true);

    // Как мы выведем имя объекта класса Child здесь, имея лишь один указатель класса Parent?

    Child* ch = dynamic_cast<Child*>(p
    ); // используем dynamic_cast для конвертации указателя класса Parent в указатель класса Child

    if (ch) // выполняем проверку ch на нулевой указатель
        std::cout << "The name of the Child is _: " << ch->getName() << '\n';


    delete p;


    int* a = new int(5);
    delete a;
    delete a;

    return 0;
}

//
// int main() {
//  std::vector<Parent *> v;
//  v.push_back(new Parent(7)); // добавляем объект класса Parent в наш вектор
//  v.push_back(new Child(8)); // добавляем объект класса Child в наш вектор
//
//  // Выводим все элементы нашего вектора
//  for (int count = 0; count < v.size(); ++count)
//    std::cout << "I am a " << v[count]->getName() << " with value_ " << v[count]->getValue() <<
//    "\n";
//
//  for (int count = 0; count < v.size(); ++count)
//    delete v[count];
//
//  return 0;
//}
//
// #include <vector>
// #include <functional> // для std::reference_wrapper
//
// int main() {
//  std::vector<std::reference_wrapper<Parent> > v;
//  Parent p(7); // p и ch не могут быть анонимными объектами
//  Child ch(8);
//  v.push_back(p); // добавляем объект класса Parent в наш вектор
//  v.push_back(ch); // добавляем объект класса Child в наш вектор
//
//  // Выводим все элементы нашего вектора
//  for (int count = 0; count < v.Size(); ++count)
//    std::cout << "I am a " << v[count].get().getName() << " with value_ " <<
//    v[count].get().getValue()
//              << "\n"; // используем .get() для получения элементов из std::reference_wrapper
//
//  return 0;
//}

// class Parent {
//  protected:
//   int id_;
//   public:
//   Parent() :id_{0} { }
//   Parent(int id):id_{id} {
//     using std::cout;
//     using std::cin;
//
//     cout << "Parent \n";
//   }
//
//   int getId() const { return id_; }
//
//    std::string toString() {
//     return  "id_ ="+ std::to_string(id_); }//"I am a Parent: id = " +
// };
//
// class Child : public Parent {
//   private:
//   double value_;
//   public:
//   Child(double value = 0.0, int id = 0) :Parent(id), value_(value) {
//     std::cout << "Child, value = " << value_ << " id = " << getId() << "\n";  }
//   double getValue() const {
//     return value_;
//   }
//   std::string toString() {
//        return Parent::toString() + ", value_ ="
//         + std::to_string(value_) + "\n";
//      }
// };
//
// int main(){
//   Child child(7.4,2);
//   std::cout << child.toString();
// return 0;
//
// }

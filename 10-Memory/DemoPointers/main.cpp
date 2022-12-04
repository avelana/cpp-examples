/////*
//// *  При запуске получите сбой
//// */
//////#include <iostream>
//////void foo(int *&p){
//////}
//////
//////int main(){
//////  int *p; // создаём неинициализированный указатель (содержимым которого является мусор)
////// // foo(p); // вводим компилятор в заблуждение, будто бы собираемся присвоить указателю
///корректное значение
//////
//////  std::cout << *p; // разыменовываем указатель с мусором
//////  return 0;
//////}
////
////
////#include <iostream>
////#include <vector>
////using namespace std;
////
//////TODO bool, douЫe
////void sizes(char ch, int i, int *ptr) {
////  cout << "Size of char = " << sizeof(char) << ' ' << sizeof(ch) << '\n';
////  cout << "Size of char int = " << sizeof(int) << ' ' << sizeof(i) << '\n';
////  cout << "Size of char =  int* = " << sizeof(int *) << ' ' << sizeof(ptr) << '\n';
////}
/////*
//// * Пример. Сумма элементов массива
//// */
////int sum(int *arr, int n) {
////  int sum = 0;
////  int *end = arr + n;
////  while (arr < end--) sum += *end;
////  return sum;
////}
////
////void max_item(int *arr, int n) {
////  int *max = arr;
////  int *end = arr + n;
////  while (arr < end--)
////    if (*max < *end) max = end;
////  cout << "Array max item = " << *max << "\nIt's index = " << max - arr << '\n';
////}
////
////int main() {
////  // Example
////  int *ptr1(0);  // ptr теперь нулевой указатель
////  int *ptr2; // ptr1 не инициализирован
////  ptr2 = 0; // ptr1 теперь нулевой указатель
////
////
////  int a[4] = {1, 2, 3, 4};
////  int* p = &a[2];
////  std::cout << p[1] << p[-1] << 1[p] << (-1)[p] << '\n';
////
////
//////  // Example
//////  double *p(0);
//////  if (p)
//////    std::cout << "ptr is pointing to a double value_.";
//////  else
//////    std::cout << "ptr is a null pointer.";
////
////
//////  int a = 7;
//////  int *ptr = &a;
//////  std::cout << a << '\n'; // выводим значение переменной a
//////  std::cout << "address = " << &a << " = " << ptr << " = " << &*ptr << '\n'; // выводим адрес
///памяти переменной a
//////  std::cout << "value_ = " << *&a << " = " << *ptr << '\n'; /// выводим значение ячейки памяти
///переменной a
////
////  //char ch = ' d ';
////  /* Указывает на сh , область памяти, размер которой равен
////   * размеру типа char . Ошибка : нельзя присвоить объект char * объекту типа int *
////   */
////  //int* pi = &ch ;
////
//
////
////  char *chPtr; // тип char занимает 1 байт
////  int *iPtr; // тип int занимает 4 байта
////
////  struct Something {
////    int nX, nY, nZ;
////  };
////
////  Something *somethingPtr;
////  Something something{1, 3, 4};
////
////  std::cout << sizeof(chPtr) << '\n'; // выведется 8
////  std::cout << sizeof(iPtr) << '\n'; // выведется 8
////  std::cout << sizeof(somethingPtr) << '\n'; // выведется 8
////  std::cout << sizeof(something) << '\n'; // выведется 12
////
////
////
//////  int *ptr_int = &a;
//////  double *prt_double;
//////  prt_double = (double *) ptr_int;
//////  *(double *) ptr_int = 2.3;
//////
//////  const int kN = 5;
//////  int arr[kN] = {1, 2, 3, 5, 5};
//////  cout << "arr = " << arr << '\n';
//////
//////  cout << "Sum of array items = " << sum(arr, kN) << '\n';
//////  max_item(arr, kN);
////
////
////  //double* р = new double [ 4 ] ; // Размеща ем 4 числа double в динамической памяти
////
////  /*Оператор new может выделять память как для отдельных элементов, так и
////  для последовательности элементов:
////   */
//////  int* pi new int ; // Выделяем память для одной переменной int
//////  int* qi = new int [ 4 ] ; // Выделяем память для четырех переменны int (ма ссива )
//////  double* pd = new double ; // Выделяем память для одной переменной  типа double
//////  double* qd = new double [n] ; // Выделяем память для п переменных типа doube
////
////  return 0;
////}
// #include <iostream>
// #include <vector>
// #include "src/Person.h"
//
// int main() {
////  int a[4] = {1, 2, 3, 4};
////  int *p = &a[2];
////  std::cout << p[1] << p[-1] << 1[p] << (-1)[p] << '\n';
////  std::cout << a[1] << a[-1] << 1[p] << (-1)[p] << '\n';
////
////  /* Сколько памяти занимает объект класса vector? Оператор sizeof НЕ пересчитывает элементы!!!
///.*/ /  std::vector<int> v(10); // Вектор с 1000 элементов /  for (int i = 0; i <40;
///i++)v.push_back(10); /  std::cout << "Size of vector<int> (lO) = " << sizeof(v) << ", "<<
///v.Size()<<  '\n';
//
//  Person tom("Ivanov", 22);
//  cout << "Name: " << tom.name << "\tAge: " << tom.age << "\t AgeRef: " << tom.ageRef << endl;
//  return 0;
//
//
//}

#include <iostream>
#include <memory>

class SomeClass {
public:
    void sayHello() { std::cout << "Hello!" << std::endl; }

    ~SomeClass() { std::cout << "~SomeClass" << std::endl; }
};

int main() {
    std::weak_ptr<SomeClass> wptr;

    {
        auto ptr = std::make_shared<SomeClass>();
        wptr = ptr;

        if (auto tptr = wptr.lock()) {
            tptr->sayHello();
        } else {
            std::cout << "lock() failed" << std::endl;
        }
    }

    if (auto tptr = wptr.lock()) {
        tptr->sayHello();
    } else {
        std::cout << "lock() failed" << std::endl;
    }
}

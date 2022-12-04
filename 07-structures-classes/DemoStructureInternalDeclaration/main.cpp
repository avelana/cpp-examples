#include <iostream>

using namespace std;

// void PrintEmployee(Employee x){ // ERROR недоступно из-за внутреннего объявления
//   //...
//}
int main() {

  // Внутреннее объявление
  struct Employee {
    short id;
    int age;
    float salary;

    string ToString() {
        return "Employee[id: " + std::to_string(id) + ", age: " + std::to_string(age)
            + ", salary: " + std::to_string(salary) + "]";
    }
  };

  struct Company {
      Employee CEO; // Employee является структурой внутри структуры Company
      int numberOfEmployees;

      string ToString() {
          return "Company[\nCEO: " + CEO.ToString()
              + ",\n numberOfEmployees: " + std::to_string(numberOfEmployees) + "]\n";
      }
  };

  Company myCompany{{3, 35, 2050.0f}, 7};

  cout << myCompany.ToString();

  cout << "myCompany.CEO.id = " << myCompany.CEO.id << '\n';

  Company ourCompany = myCompany;
  cout << ourCompany.ToString();
  return 0;
}


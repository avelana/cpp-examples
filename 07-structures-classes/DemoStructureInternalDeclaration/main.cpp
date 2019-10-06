#include <iostream>

using namespace std;
//void PrintEmployee(Employee x){ // ERROR
//  //...
//}
int main() {

  // Внутреннее объявление
  struct Employee {
    short id;
    int age;
    float salary;
    string to_string() {
      return "Employee[id: " + std::to_string(id)
          + ", age: " + std::to_string(age)
          + ", salary: " + std::to_string(salary) + "]";
    }
  };

  struct Company {
    Employee CEO; // Employee является структурой внутри структуры Company
    int numberOfEmployees;
    string to_string() {
      return "Company[\nCEO: " + CEO.to_string()
          + ",\n numberOfEmployees: " + std::to_string(numberOfEmployees) + "]\n";
    }
  };

  Company myCompany{{3, 35, 2050.0f}, 7};

  cout << myCompany.to_string();

  cout << "myCompany.CEO.id = " << myCompany.CEO.id << '\n';

  Company ourCompany = myCompany;
  cout << ourCompany.to_string();
  return 0;
}

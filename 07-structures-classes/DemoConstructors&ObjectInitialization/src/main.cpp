#include <iostream>
#include <string>
#include <vector>

class Values {
private:
    const std::vector<int> vec;

public:
    Values()
        : vec{3, 4, 5, 6, 7, 8, 9} { // используем uniform инициализацию для инициализации вектора
    }

    std::vector<int>& GetVec() { return const_cast<std::vector<int>&>(vec); };
};

class Employee {
private:
    int id;
    std::string name;

public:
    Employee() : Employee("unknown") { std::cout << "Default Constructor\n"; }

    // Используем делегирующие конструкторы для сокращения дублированного кода
    Employee(const std::string& new_name) : Employee(0, new_name) {
        std::cout << "Constructor with 1 arg\n";
    }

    Employee(int new_id, const std::string& new_name = "") : id(new_id), name(new_name) {
        std::cout << "Constructor with 2 arg\n";
        std::cout << "Employee " << name << " created. Id = " << id << '\n';
        // Employee();
    }
};

int main() {
    Employee employee1;
    std::cout << "----------------------------\n";
    Employee employee2("Ivanov");
    std::cout << "----------------------------\n";
    Employee employee3(3, "Sidorov");

    Values val;

    for (auto& tmp : val.GetVec()) {
        std::cout << tmp << ' ';
    }
    std::cout << '\n';
    return 0;
}

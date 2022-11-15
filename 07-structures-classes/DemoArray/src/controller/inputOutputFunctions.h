#ifndef INPUT_OUTPUT_FUNCTIONS_H
#define INPUT_OUTPUT_FUNCTIONS_H

#include <fstream>
#include <string>
#include <vector>

template<class T>
void outputToFile(const std::string& filePath, const std::vector<T>& array, char delimiter) {
    std::ofstream fout(filePath);
    for (auto tmp : array) {
        fout << tmp << delimiter;
    }
    fout.close();
}

template<class T>
void outputToConsole(const std::vector<T>& array, char delimiter) {
    for (auto tmp : array) {
        std::cout << tmp << delimiter;
    }
    std::cout << std::endl;
}

template<class T>
void inputFromFile(const std::string& filePath, std::vector<T>& array, char delimiter) {
    std::ifstream fin(filePath, std::ios::in);
    T tmp;
    char c;
    while (fin >> tmp) {
        array.push_back(tmp);
        if (delimiter != ' ') {
            fin >> c;
        }
    }
    fin.close();
}


#endif
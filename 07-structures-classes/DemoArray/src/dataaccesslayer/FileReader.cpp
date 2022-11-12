//
// Created by volha on 11/12/2022.
//

#include <fstream>
#include <vector>

#include "../Logger.h"
#include "FileReader.h"

void FileReader::read(const std::string& filePath, std::vector<int>& list) {
    std::ifstream fin(filePath);
    if (!fin) {
        Logger::out("File doesn't exist: " + filePath);
        throw "File doesn't exist: " + filePath;
    }
    int number;
    while (fin >> number) {
        list.push_back(number);
    }
    if (fin.bad()) {
        Logger::out("I/O error while reading");
        fin.close();
        throw "I/O error while reading";
    } else if (fin.eof()) {
        Logger::out("End of file reached successfully");
        fin.close();
        return;
    } else if (fin.fail()) {
        Logger::out("Non-integer data encountered");
        fin.close();
        throw "Non-integer data encountered\n";
    }
}

void FileReader::read(const std::string& filePath, std::vector<double>& list) {
    std::ifstream fin(filePath);
    if (!fin) {
        Logger::out("File doesn't exist: " + filePath);
        throw "File doesn't exist: " + filePath;
    }
    double number;
    while (fin >> number) {
        list.push_back(number);
    }
    if (fin.bad()) {
        Logger::out("I/O error while reading");
        fin.close();
        throw "I/O error while reading";
    } else if (fin.eof()) {
        Logger::out("End of file reached successfully");
        fin.close();
        return;
    } else if (fin.fail()) {
        Logger::out("Non-double data encountered");
        fin.close();
        throw "Non-double data encountered\n";
    }
}

void FileReader::read(const std::string& filePath, std::vector<std::string>& list) {
    std::ifstream fin(filePath);
    if (!fin) {
        Logger::out("File doesn't exist: " + filePath);
        throw "File doesn't exist: " + filePath;
    }
    std::string str;
    while (fin >> str) {
        list.push_back(str);
    }
    if (fin.bad()) {
        Logger::out("I/O error while reading");
        fin.close();
        throw "I/O error while reading";
    } else if (fin.eof()) {
        Logger::out("End of file reached successfully");
        fin.close();
        return;
    }
}

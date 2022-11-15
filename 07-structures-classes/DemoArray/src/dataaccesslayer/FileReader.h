//
// Created by volha on 11/12/2022.
//

#ifndef FILEREADER_H
#define FILEREADER_H
#include <string>
#include <vector>


class FileReader
{
public:
    void read(const std::string &filePath, std::vector<int> &list);
    void read(const std::string &filePath, std::vector<double> &list);
    void read(const std::string &filePath, std::vector<std::string> &list);
};


#endif // FILEREADER_H

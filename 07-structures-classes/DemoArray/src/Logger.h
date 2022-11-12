//
// Created by volha on 11/12/2022.
//

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>

class Logger {
public:
    static void out(const std::string&);
    static void out(const std::string&, void*);
};


#endif // LOGGER_H

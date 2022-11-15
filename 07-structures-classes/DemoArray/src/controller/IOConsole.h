#ifndef IOCONSOLEY_H
    #define IOCONSOLE_H
    #include "../entity/Array.h"
    #include "../entity/ArrayOnVector.h"
    #include <string>

class IOConsole {
public:
    static void show(const ArrayOnVector&);
    static void show(const Array&);
    static void show(const std::vector<double>&);
    static void show(const double&, const std::string&);
    static void show(const std::string&);
};

#endif // IOCONSOLE_H
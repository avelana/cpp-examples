#include <glog/logging.h>

// #include "lib/glog/logging.h'
// #include "d:/prCPP/_libs/glog/build/glog/logging.h"
/*
 * install glog: https://github.com/google/glog/blob/master/cmake/INSTALL.md
 */
int main(int argc, char* argv[]) {
    // int main () {
    //  Инициализация библиотеки журналов Google.
    google::InitGoogleLogging(argv[0]);

    LOG(INFO) << "This is an info  message";
    LOG(WARNING) << "This is a warning message";
    LOG(ERROR) << "This is an error message";
    LOG(ERROR) << "This is an error message";
    LOG(FATAL) << "This is a fatal message";

    return 0;
}
//
// Created by volha on 11/30/2021.
//

#ifndef PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_TIME_H_
#define PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_TIME_H_

class Time {
    int seconds;

public:
    Time() { }

    /*explicit*/
    Time(int sec) : seconds(sec) { }

    operator int();
};

#endif // PRCPP_1SEM_07_STRUCTURES_CLASSES_DEMOCONSTRUCTORS_SRC_TIME_H_

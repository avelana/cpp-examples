//
// Created by volha on 29.10.2019.
//

#ifndef DEMOMATRIX_SRC_MATRIX_H_
#define DEMOMATRIX_SRC_MATRIX_H_

class Matrix {
private:
    int** a_;
    int n_;
    int m_;

public:
    Matrix();
    ~Matrix();
    Matrix(const int n, const int m);
    Matrix(const int n, const int m, const int k);
    int GetN();
    int GetM();
    int** GetA();
    void show();
};

#endif // DEMOMATRIX_SRC_MATRIX_H_

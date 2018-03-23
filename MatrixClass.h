//
// Created by michal on 23.03.18.
//

#ifndef UNTITLED_MATRIXCLASS_H
#define UNTITLED_MATRIXCLASS_H


#include <ostream>

class MatrixClass {
    int N;
    double **matrix;
public:
    MatrixClass(int N);

    ~MatrixClass();

    //double determinar(double**);

    friend std::ostream &operator<<(std::ostream &, MatrixClass &);

/*
    friend MatrixClass operator+(const MatrixClass &m);

    friend MatrixClass &operator+=(const MatrixClass &m);

    friend MatrixClass operator-(const MatrixClass &m);

    friend MatrixClass &operator-=(const MatrixClass &m);

    friend MatrixClass operator*(const MatrixClass &m);

    friend MatrixClass &operator*=(const MatrixClass &m);*/
};

//MatrixClass operator+(const MatrixClass &m);
std::ostream &operator<<(std::ostream &out, MatrixClass &m);


#endif //UNTITLED_MATRIXCLASS_H

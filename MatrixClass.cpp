//
// Created by michal on 23.03.18.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "MatrixClass.h"

MatrixClass::MatrixClass(int numberOfDegree) {
    matrix = new double*[numberOfDegree];
    for (int i = 0; i < numberOfDegree; ++i) {
        matrix[i] = new double[numberOfDegree];
    }

    srand(time(NULL));
    for (int i = 0; i < numberOfDegree; ++i) {
        for (int j = 0; j < numberOfDegree; ++j) {
            //matrix[i][j] = (double)(std::rand())/(double)(RAND_MAX);
            matrix[i][j] = (std::rand()%1000);
        }
    }

    MatrixClass::numberOfDegree = numberOfDegree;

}
/*

double **MatrixClass::getMatrix(int n, int m) const {
    return matrix[n-1][m-1];
}
*/

MatrixClass::~MatrixClass() {
    for (int i = 0; i < numberOfDegree; ++i)
        delete [] matrix[i];
    delete [] matrix;
}


std::ostream &operator<<(std::ostream &out, MatrixClass &m) {
    out<<"Matrix degree N = "<< m.numberOfDegree <<"\n";
    for (int i = 0; i < m.numberOfDegree; ++i) {
        for (int j = 0; j < m.numberOfDegree; ++j) {
            out<<m.matrix[i][j]<<" ";
        }
        out<<std::endl;
    }
    return out;
}

MatrixClass &operator+(const MatrixClass &m) {

    //if (m.numberOfDegree != this->numberOfDegree)
    //    return this;
    //else
        MatrixClass temp(this->numberOfDegree);
        for (int i = 0; i < this->numberOfDegree; ++i) {
            for (int j = 0; j < this->numberOfDegree; ++j) {
                temp.matrix[i][j]=m.matrix[i][j]+this->matrix[i][j];
            }
        }
    //}
}
/*
MatrixClass operator+(const MatrixClass &m) {
    return MatrixClass(MatrixClass::numberOfDegree);
}*/
/*

double MatrixClass::determinar(double**) {
    MatrixClass *minor = new MatrixClass(numberOfDegree);

*/








//
// Created by michal on 23.03.18.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "MatrixClass.h"

MatrixClass::MatrixClass(int N) {
    matrix = new double*[N];
    for (int i = 0; i < N; ++i) {
        matrix[i] = new double[N];
    }

    srand(time(NULL));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = 4.0;
        }
    }

    MatrixClass::N = N;

}
/*

double **MatrixClass::getMatrix(int n, int m) const {
    return matrix[n-1][m-1];
}
*/

MatrixClass::~MatrixClass() {
    for (int i = 0; i < N; ++i)
        delete [] matrix[i];
    delete [] matrix;
}


std::ostream &operator<<(std::ostream &out, MatrixClass &m) {
    out<<"Matrix degree N = "<< m.N <<"\n";
    for (int i = 0; i < m.N; ++i) {
        for (int j = 0; j < m.N; ++j) {
            out<<m.matrix[i][j]<<" ";
        }
        out<<std::endl;
    }
    return out;
}
/*
MatrixClass operator+(const MatrixClass &m) {
    return MatrixClass(MatrixClass::N);
}*/
/*

double MatrixClass::determinar(double**) {
    MatrixClass *minor = new MatrixClass(N);

*/








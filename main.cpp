#include <iostream>
#include "MatrixClass.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    int N = 5;
    MatrixClass macierz1(N);
    MatrixClass macierz2(N);

    cout<<macierz1;
    return 0;
}
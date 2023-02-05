#include <iostream>
#include "vector.cpp"

int main(int argc, char const *argv[])
{
    double *p = new double[10]; 
    vector v(10);               
    delete[] p;

    return 0;
}

#include <iostream>
#include "vector.cpp"

int main()
{
    vector numbers(5);

    numbers[0] = 32.45;
    numbers[1] = 312.345;
    numbers[2] = 532.545;
    numbers[3] = 932.145;
    numbers[4] = 55.45;

    numbers.push_back(729.123);

    std::cout << numbers[5] << std::endl;

    return 0;
}

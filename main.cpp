#include <iostream>
#include "vector.cpp"

int main()
{
    vector numbers(10);

    numbers.push_back(10.5);
    numbers.push_back(19.13);
    numbers.push_back(210.59);
    numbers.push_back(0.35);
    numbers.push_back(100.00);

    std::cout << numbers[2] << std::endl;

    return 0;
}

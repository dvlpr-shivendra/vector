#include "vector.h"

vector::vector(int s) : size(s), elements{new double[size]}
{
    for (int i = 0; i < s; ++i)
    {
        elements[i] = 0; // initialize elements
    }
}
vector::~vector()
{
    delete[] elements;
}

void vector::reserve(int new_alloc)
{
    if (size > new_alloc)
    {
        return; // Do not decrease space
    }

    double *p = new double[new_alloc]; // allocate new space

    for (int i = 0; i < size; i++)
    {
        p[i] = elements[i];
    }
    delete[] elements;
    elements = p;
    space = new_alloc;
}

int vector::capacity() const
{
    return space;
}

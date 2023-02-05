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

void vector::push_back(double d)
// increase vector size by one; initialize the new element with d
{
    if (space == 0)
        reserve(8); // start with space for 8 elements
    else if (size == space)
        reserve(2 * space); // get more space
    elements[size] = d;     // add d at end
    ++size;                 // increase the size (sz is the number of elements)
}

int vector::capacity() const
{
    return space;
}

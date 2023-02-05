class vector
{
private:
    int size;
    double *elements; // address of first element
    int space;        // no of elements plus free slots

public:
    vector(int);
    ~vector();
    void reserve(int);
    int capacity() const;
};

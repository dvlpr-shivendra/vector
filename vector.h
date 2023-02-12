class vector
{
private:
    int size;
    double *elements; // address of first element
    int space;        // no of elements plus free slots

public:
    vector();
    vector(int);
    ~vector();
    void push_back(double);
    void reserve(int);
    int capacity() const;
    int getSize() const;
    double &operator[](int);
    const double &operator[](int i) const;
};

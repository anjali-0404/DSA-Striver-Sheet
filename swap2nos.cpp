// without temp variable
class solution
{
public:
    void swap(int &a, int &b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
};

// with temp variable
class solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
};

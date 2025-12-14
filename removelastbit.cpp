class solution
{
public:
    int removelastbit(int n)
    {
        return n & (n - 1);
    }
};

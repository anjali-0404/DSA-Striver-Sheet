class solution
{
public:
    int powerof2ornot(int n)
    {
        return (n && !(n & (n - 1)));
    }
};

class solution
{
public:
    int clearithbit(int n, int i)
    {
        return n & (~(1 << i));
    }
};
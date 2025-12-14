class solution
{
public:
    int ithbitset(int n, int i)
    {
        return n | (1 << i);
    }
};
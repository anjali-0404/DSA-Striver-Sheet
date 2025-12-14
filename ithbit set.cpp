// using <<
class solution
{
public:
    int ithbit(int n, int i)
    {
        return (n & (1 << i)) != 0;
    }
};
// using >>
class solution
{
public:
    int ithbit(int n, int i)
    {
        return (n >> i) & 1;
    }
};
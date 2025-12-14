class solution
{
public:
    int countsetbits(int n)
    {
        int count = 0;
        while (n > 1)
        {
            if (n % 2 == 0)
                count++;
            n = n / 2;
        }
        if (n == 1)
            count++;
        return count;
    }
};

// optimized approach
class solution
{
public:
    int countsetbits(int n)
    {
        int count = 0;
        while (n > 0)
        {
            n = n & (n - 1);
            count++;
        }
        return count;
    }
};

// using >> to count set bits

class solution
{
public:
    int countsetbits(int n)
    {
        int count = 0;
        while (n > 0)
        {
            count += (n & 1);
            n = n >> 1;
        }
        return count;
    }
};

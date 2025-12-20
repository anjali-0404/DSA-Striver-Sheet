class Solution
{
public:
    int cntWays(vector<int> &arr)
    {
        int n = arr.size();
        int oddSum = 0, evenSum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
                oddSum += arr[i];
            else
                evenSum += arr[i];
        }
        int oddSumFromBack = 0, evenSumFromBack = 0;
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2 != 0)
                oddSum -= arr[i];
            else
                evenSum -= arr[i];
            if (oddSum + evenSumFromBack == evenSum + oddSumFromBack)
                ans++;
            if (i % 2 != 0)
                oddSumFromBack += arr[i];
            else
                evenSumFromBack += arr[i];
        }
        return ans;
    }
};

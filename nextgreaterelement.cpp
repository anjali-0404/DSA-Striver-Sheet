class solution
{
    vector<int> nextgreaterelement(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[i])
                {
                    ans[i] = arr[j];
                    break;
                }
            }
        }
        return ans;
    }
};
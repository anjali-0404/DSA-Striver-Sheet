class solution
{
    vector<int> nextgreaterelement(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> stk;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!stk.empty() && stk.top <= arr[i])
            {
                stk.pop();
            }
            if (!stk.empty())
            {
                ans = stk.top();
            }
            stk.push(arr[i]);
        }
        return ans;
    }
}
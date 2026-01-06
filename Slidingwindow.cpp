class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n=arr.size();
        int window=0;
        for (int i=0; i<k; i++) {
            window^=arr[i];
        }
        int maximum = window;
        for (int i = k; i < n; i++) {
            window^=arr[i - k]; 
            window^=arr[i];   
            maximum=max(maximum, window);
        }
        return maximum;
    }
};

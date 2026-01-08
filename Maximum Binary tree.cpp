class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        // DP table using vector (C++ safe)
        vector<vector<int>> dp(n+1, vector<int>(m+1, INT_MIN));

        for(int i = n-1; i >= 0; i--){
            for(int j = m-1; j >= 0; j--){

                // pair option
                int a = nums1[i] * nums2[j];
                if(dp[i+1][j+1] > 0){
                    a += dp[i+1][j+1];
                }

                // skip options
                int sk1 = dp[i+1][j];
                int sk2 = dp[i][j+1];

                dp[i][j] = max(a, max(sk1, sk2));
            }
        }
        return dp[0][0];
    }
};

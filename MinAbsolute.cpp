class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> ans(m-k+1, vector<int>(n-k+1));

        for(int i=0;i<=m-k;i++){
            for(int j=0;j<=n-k;j++){
                vector<int> v; //store elements
                for(int x=i;x<i+k;x++){
                    for(int y=j;y<j+k;y++){
                        v.push_back(grid[x][y]); //collect
                    }
                }
                if(v.size()==1){
                    ans[i][j]=0; //only one element
                    continue;
                }
                sort(v.begin(), v.end()); //sort
                int mini = INT_MAX;
                for(int t=1;t<v.size();t++){
                    mini = min(mini, v[t]-v[t-1]); //diff
                }
                ans[i][j] = mini;
            }
        }

        return ans;
    }
};

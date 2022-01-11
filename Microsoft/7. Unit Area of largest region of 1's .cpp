class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int n, m;
    int findMaxArea(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int ans =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]) ans = max(ans, find(i, j, grid));
            }
        }
        return ans;
        
    }
    
    int find(int i, int j, vector<vector<int>>& grid)
    {
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0) return 0;
        
        grid[i][j] = 0;
        return find(i+1, j, grid) + find(i-1, j, grid) + 
               find(i, j+1, grid) + find(i, j-1, grid) +
               find(i+1, j+1, grid) + find(i+1, j-1, grid) + 
               find(i-1, j+1, grid) + find(i-1, j-1, grid) + 1;
    }
};

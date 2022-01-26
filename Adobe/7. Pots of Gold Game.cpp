class Solution {
public:
        int dp[600][600];
    int maxCoins(vector<int>&A,int n)
    {
        memset(dp, -1, sizeof(dp));
	    return find(1, 0, n-1, A);
    }
    
    int find(int state, int i, int j, vector<int>&A)
    {
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
       int x = A[i] + min(find(0, i+2, j, A), find(0, i+1, j-1, A));
       int y = A[j] + min(find(0, i, j-2, A), find(0, i+1, j-1, A));
        
        return dp[i][j] = max(x, y);
    }
};

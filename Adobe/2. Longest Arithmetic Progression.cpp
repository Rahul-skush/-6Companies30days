class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
        vector<unordered_map<int, int>> dp(n);
          
          if(n==1) return 1;
          if(n==2) return 2;
        
        int ans =0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int diff = A[i] - A[j];
                if(dp[j].count(diff))
                dp[i][diff] = dp[j][diff]+1;
                else dp[i][diff] = 2;
                
                ans = max(ans, dp[i][diff]);
            }
            
        }
        
        return ans;
    }
};

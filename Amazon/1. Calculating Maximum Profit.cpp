class Solution {
  public:
    int maxProfit(int k, int n, int A[]) {
        // code here
        if(k>=n/2)
        {
            int ans = 0;
            for(int i=1;i<n;i++)
            ans += max(0, A[i]-A[i-1]);
            return ans;
        }
        
        int dp[2*k+1];
        for(int i=0;i<2*k+1;i++)
        if(i%2==0) dp[i] = INT_MIN;
        else dp[i] = 0;
        
        int ans =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2*k+1;j++)
            {
                if(j==0) dp[j] = max(dp[j], -A[i]);
                else if(j%2==0) dp[j] = max(dp[j], dp[j-1] - A[i]);
                else dp[j] = max(dp[j], dp[j-1]+A[i]);
                
                ans = max(ans, dp[j]);
            }
        }
        
        return ans;
    }
};

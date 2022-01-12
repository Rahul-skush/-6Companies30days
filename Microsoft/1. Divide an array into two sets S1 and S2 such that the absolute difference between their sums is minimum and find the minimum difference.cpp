class Solution{

  public:
  
	int minDifference(int arr[], int n)  { 
	    int sum =0;
	    int ans = INT_MAX;
	    for(int i=0;i<n;i++)
	    sum += arr[i];
	    
	    vector<vector<bool>> dp(n+1, vector<bool>(sum+1, 0));
	    
	    for(int i=0;i<=n;i++)
	    dp[i][0] = 1;
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            if(j-arr[i-1]>=0)
	            dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
	            else dp[i][j] = dp[i-1][j];
	        }
	    }
	    
	    for(int j=0;j<=sum/2;j++)
	    {
	        if(dp[n][j]==1) ans = min(ans, abs(sum-2*j));
	    }
	    return ans;
	    
	} 
	
};

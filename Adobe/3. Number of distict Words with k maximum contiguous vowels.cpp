class Solution
{
  public:
  long long dp[1002][1002];
  int mod = 1e9+7;
    int kvowelwords(int n, int k) {
        memset(dp, -1, sizeof(dp));
        
        return solve(n, 0, k)%mod;
    }
    
    long long int solve(int n, int cnt, int k)
    {
        if(n==0) return 1;
        if(dp[n][cnt]!=-1) return (dp[n][cnt])%mod;
        
        if(cnt==k) return dp[n][cnt] = ((21%mod)*(solve(n-1, 0, k))%mod)%mod;
        return dp[n][cnt] = (((21%mod)*(solve(n-1, 0, k))%mod)%mod + (5*(solve(n-1, cnt+1, k))%mod)%mod)%mod;
    }
};

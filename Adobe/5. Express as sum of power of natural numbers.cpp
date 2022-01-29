class Solution{
    public:
    int dp[1002][1002];
    int mod = 1e9+7;
    int numOfWays(int n, int x)
    {
        memset(dp, -1, sizeof(dp));
        
            
           return  find(log_x(n, x), n, x);
           
        
    }
    
    int find(int i, int n, int x)
    {
        
        if(n==0) {return 1;}
        if(n<0 || i<0) return 0;
        if(dp[i][n]!=-1) return dp[i][n];
         
        
        
        return dp[i][n] =  (find(i-1, n-pow(i, x), x) + find(i-1, n, x))%mod;;
    }
    
    int log_x(int n, int x)
    {
        int i = 1;
        for(;i<=n;i++)
        {
            if(pow(i, x)>= n) break;
        }
        if(pow(i, x)>n) return i-1;
        return i;
    }
};

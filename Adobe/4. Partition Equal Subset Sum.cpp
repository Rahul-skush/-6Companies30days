class Solution{
public:
int n;
    int equalPartition(int N, int arr[])
    {
        n =N;
       int sum =0;
       for(int i=0;i<N;i++)
       sum += arr[i];
       
       if(sum%2) return 0;
       vector<vector<int>> dp(n, vector<int>(sum/2+1, -1));
       return find(0, arr, sum/2, dp);
    }
    
    int find(int i, int arr[], int sum, vector<vector<int>>& dp)
    {
        if(sum==0) return 1;
        if(sum<0 || i==n) return 0;
        if(dp[i][sum]!=-1) return dp[i][sum];
        
        return dp[i][sum] = find(i+1, arr, sum-arr[i], dp) || find(i+1, arr, sum, dp);
    }
};

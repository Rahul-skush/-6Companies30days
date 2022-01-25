class Solution{

  public:
  int ans = INT_MAX;
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum =0;
	    for(int i=0;i<n;i++)
	    sum+=arr[i];
	    vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
	    find(0, arr, 0, sum, n, dp);
	    return ans;
	} 
	
	int find(int i, int arr[], int target, int sum, int n, vector<vector<int>> &dp)
	{
	   
	    if(dp[i][target]!=-1) return dp[i][target];
	    if(target>= sum/2){
	        ans = min(ans, abs(2*target-sum));
	        return ans;
	    }
	     if(i>=n) return INT_MAX;
	   dp[i][target] = min( find(i+1, arr, target+arr[i], sum, n, dp),
	    find(i+1, arr, target, sum, n, dp));
	}
};

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
       long long ans =0, prod =1;
       int i=0, j=0;
       while(j<n)
       {
           prod *= a[j++];
           while(prod>=k)
           prod /= a[i++];
           
           long long m = j-i;
           ans += m;
       }
       
       return ans;
    }
};

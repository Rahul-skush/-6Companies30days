class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            if(i>=1 && arr[i-1]==arr[i]) continue;
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1 && arr[j-1]==arr[j]) continue;
                int sum = k - (arr[i]+arr[j]);
                
                int l = j+1, h = n-1;
                while(l<h)
                {
                    int s = arr[l] + arr[h];
                    if(s==sum)
                    {
                        v.push_back({arr[i], arr[j], arr[l], arr[h]});
                        int f1 =arr[l], f2 =arr[h];
                        while(l<h && f1==arr[l])
                        {l+=1;}
                        while(h>l && f2==arr[h])
                        {h-=1;}
                        
                    }else if(s<sum) l++;
                    else h--;
                }
            }
        }
        
        return v;
    }
};

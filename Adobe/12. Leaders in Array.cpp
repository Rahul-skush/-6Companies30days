class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        int mx = -1;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=mx)
            v.push_back(a[i]);
            
            mx = max(mx, a[i]);
        }
        
        reverse(v.begin(), v.end());
        
        return v;
    }
};

class Solution {
  public:
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        vector<int> v;
        unordered_set<int> st;
        for(int i=0;i<M;i++)
        st.insert(B[i]);
        
        for(int i=0;i<N;i++)
        {
            if(st.find(A[i])!=st.end())
            v.push_back(A[i]);
        }
        
        return N+M - 2*solve(v);
    }
    
    int solve(vector<int> a)
    {
        vector<int> res;
        
        for(int i=0;i<a.size();i++)
        {
            auto it = lower_bound(res.begin(), res.end(), a[i]);
            if(it==res.end())
            res.push_back(a[i]);
            else *it = a[i];
        }
        
        return res.size();
    }
};

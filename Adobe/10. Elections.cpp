class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string, int> mp;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        
        string s;
        int m=0;
        for(auto x : mp)
        {
                if(x.second>m)
                {s = x.first; m = x.second;}
                else if(x.second==m && x.first<s)
                {s = x.first; m = x.second;}
            
        }
        return {s, to_string(m)};
    }
};

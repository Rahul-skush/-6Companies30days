class Solution
{
    public:
    //Function to find the largest number after k swaps.
    string ans;
    string findMaximumNum(string str, int k)
    {
       ans = str;
       find(0, str, k);
       return ans;
    }
    
    void find(int i, string s, int k)
    {
        ans = max(ans, s);
        if(k==0 || i==s.size()) return;
       
        int l=i;
        for(int j=i+1;j<s.size();j++)
        {
            if(s[j]>s[i])
            {
                swap(s[j], s[i]);
                find(i+1, s, k-1);
                swap(s[j], s[i]);
            }
        }
         find(i+1, s, k);
                
    }
};

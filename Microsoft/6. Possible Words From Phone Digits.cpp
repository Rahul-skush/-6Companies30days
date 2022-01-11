
class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> v;
    vector<string> mp = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    vector<string> possibleWords(int a[], int N)
    {
        int cnt =0;
        for(int i=0;i<N;i++)
        {
            cnt += mp[a[i]].size();
        }
        find(0, 0, a, N, "");
        string s;
        for(int i=0;i<v.size();i++)
        {
            s += v[i];
            if((i+1)%cnt==0) { ans.push_back(s); s = "";}
            else s +=' ';
        }
        if(s.size())
        {s.pop_back();
        ans.push_back(s);}
        return ans;
    }
    
    void find(int i, int k,  int a[], int n, string s)
    {
        
        if(i>=n) {
            v.push_back(s);
            return ;
        }
        string tt = mp[a[i]];
        for(int j =0;j<tt.size();j++)
        {
            s += tt[j];
            find(i+1, j, a, n, s);
            s.pop_back();
        }
        
    }
};

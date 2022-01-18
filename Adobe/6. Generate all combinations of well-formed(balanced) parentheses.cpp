class Solution
{
    public:
    vector<string> v;
    set<string> st;
    vector<string> AllParenthesis(int n) 
    {
        string s;
        find( s, n,n);
        return v;
    }
    
    void find( string &s, int cnt1,  int cnt2)
    {
        
        if(cnt1==0 && cnt2==0) {
            if(check(s))
            {v.push_back(s); st.insert(s);}
            return ;
        }
        
        if(cnt1>0){
           s+='(';
        find( s,  cnt1-1, cnt2 );
        s.pop_back(); 
        }
        
        
        if(cnt2>0 && cnt1<cnt2)
        {s+=')';
        find( s,  cnt1, cnt2-1);
        s.pop_back();}
    }
    
    bool check(string &s)
    {
        stack<char> st;
        for(auto c : s)
        {
            if(c==')')
            {
                if(st.empty()) return 0;
                st.pop();
            }else st.push('(');
        }
        
        return st.empty();
    }
};

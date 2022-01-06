class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        set<string> st;
        for(int i=0;i<n;i++)
        st.insert(contact[i]);
        vector<vector<string>> res;
        for(int i=0;i<s.size();i++)
        {
            auto it = st.begin();
            vector<string> v;
            while(it!=st.end())
            {
                string t = *it;
                if(t.size()<=i || t[i]!=s[i]) {it++; st.erase(t);}
                else{
                    v.push_back(t);
                    it++;
                }
            }
            if(v.size()==0) v.push_back("0");
            res.push_back(v);
        }
        
        return res;
    }
};

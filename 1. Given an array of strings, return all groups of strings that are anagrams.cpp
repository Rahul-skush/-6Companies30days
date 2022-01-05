class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string, vector<string>> mp;
        for(auto x : string_list)
        {
            string s = x;
            sort(s.begin(), s.end());
            mp[s].push_back(x);
        }
        vector<vector<string> > v;
        for(auto x : mp)
        {
            v.push_back(x.second);
        }
        return v;
    }
};

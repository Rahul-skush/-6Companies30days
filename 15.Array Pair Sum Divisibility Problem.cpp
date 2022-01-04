class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map<int, int> mp;
        for(auto x : nums)
        mp[x%k]++;
        
        for(auto x : mp)
        {
            int one = x.first;
            int two = k - x.first;
            if(two==k) two =0;
            if(one==two){
                if(mp[one]%2) return 0;
                else continue;
            } 
            if(mp[one]!=mp[two]) return 0;
        }
        
        return 1;
    }
};

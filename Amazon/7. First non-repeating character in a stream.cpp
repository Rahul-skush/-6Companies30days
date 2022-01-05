class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> mp(26, 0);
		    string s;
		    deque<char> dq;
		    for(auto c : A)
		    {
		        mp[c-'a']++;
		        if(mp[c-'a']==1)
		        dq.push_back(c);
		        
		        int f =0;
		        
		        while(!dq.empty() && mp[dq.front()-'a']>1)
		        dq.pop_front();
		         
		         if(dq.size())
		         s+= dq.front();
		         else s += '#';
		            
		    }
		    return s;
		}

};

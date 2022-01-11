class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        map<char, vector<char>> mp;
        map<char, int> indegree;
        set<char> st;
        for(auto c : dict[0])
            st.insert(c);
        for(int i=1;i<N;i++)
        {
            for(auto c : dict[i])
            st.insert(c);
            int j=0, k = 0, n = dict[i-1].size(), m = dict[i].size();
            while(j<n && k<m && dict[i-1][j]==dict[i][k])
            j++, k++;
            
            if(j<n && k<m)
                {mp[dict[i-1][j]].push_back(dict[i][k]);
               // cout<<dict[i-1][j]<<" "<<dict[i][k]<<endl;
                indegree[dict[i][k]]++;}
                
        }
        
        queue<char> q;
        for(char i : st)
        if(indegree[i]==0) q.push(i);
        
        string s;
        while(!q.empty())
        {
            char c = q.front();
            s+=c;
            q.pop();
            for(auto x : mp[c])
            {  
                indegree[x]--;
                if(indegree[x]==0) q.push(x);
            }
            
        }
        //cout<<s;
        return s;
    }
};

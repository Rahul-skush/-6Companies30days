class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<int> adj[n];
        vector<int> degree(n, 0);
        for(int i =0;i<pre.size();i++)
        {
            adj[pre[i][0]].push_back(pre[i][1]);
            degree[pre[i][1]]++;
        }
        
        vector<int> v(n);
        queue<int> q;
        for(int i=0;i<n;i++)
            if(degree[i]==0) q.push(i);
        
        while(!q.empty())
        {
            int x = q.front(); q.pop();
              v[--n] = x;
            for(auto y : adj[x])
            {
                if(--degree[y]==0) q.push(y);
            }
        }
        
        if(n) return vector<int>();
        return v;
    }
};

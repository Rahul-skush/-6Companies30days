class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<int> vis(V, 0);
            dfs(c, adj, c, d, vis);
            
            return vis[d]==0;
        
    }
    
    bool dfs(int s, vector<int> adj[], int c, int d, vector<int>&vis)
    {
        vis[s] = 1;
        for(auto x : adj[s])
        {
            if((c==s&& x==d ) || (c==x && d==s)) continue;
            if(vis[x]==0)
            dfs(x, adj, c, d, vis);
        }
    }
};

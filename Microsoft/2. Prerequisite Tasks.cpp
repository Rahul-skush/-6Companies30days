class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    vector<int> adj[N];
	    vector<int> indegree(N);
	    for(auto x : prerequisites)
	    {adj[x.first].push_back(x.second);
	    indegree[x.second]++;}
	    
	    int cnt =N;
	    queue<int> q;
	    for(int i=0;i<N;i++)
	   if(indegree[i]==0) {q.push(i); cnt--;}
	    
	    while(!q.empty())
	    {
	        int x = q.front(); q.pop();
	        
	        for(auto it : adj[x])
	        {
	            indegree[it]--;
	            
	            if(indegree[it]==0) {q.push(it); cnt--;}
	        }
	    }
	    
	    return cnt==0;
	}
};

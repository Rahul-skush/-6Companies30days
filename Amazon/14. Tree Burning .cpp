class Solution {
  public:
  map<int, vector<int>> mp;
    int minTime(Node* root, int target) 
    {
        find(root, NULL);
        
        queue<int> q;
        int n = mp.size();
        vector<bool> vis(10002, 0);
        vis[target] =1;
        q.push(target);
        int cnt =-1;
        //cout<<n<<endl;
        while(!q.empty())
        {
            int m = q.size();
            while(m--)
            {
                int x = q.front(); q.pop();
                //cout<<x<<" ";
                
                for(auto it : mp[x])
                {
                    if(vis[it]==0)
                    {q.push(it); vis[it]= 1;}
                } 
            }
            cnt++;
            //cout<<endl;
        }
        
        return cnt; 
        
    }
    
    void find(Node * root, Node * parent)
    {
        if(!root) return ;
        if(parent && root) 
        {mp[root->data].push_back(parent->data); mp[parent->data].push_back(root->data);}
         find(root->left, root);
         find(root->right, root);
    }
};

class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        vector<int> v;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                Node * p = q.front(); q.pop();
                if(p)
                v.push_back(p->data);
                else v.push_back(-1);
                if(!p) continue;
                q.push(p->left);
                q.push(p->right);
            }
        }
        
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       queue<Node*> q;
       Node *root = new Node(A[0]);
       q.push(root);
       int i=1;
       while(!q.empty())
       {
           int n = q.size();
           while(n--)
           {
               Node * p = q.front(); q.pop();
               
               if(A[i]==-1)
               {p->left = NULL; i++;}
               else {p->left = new Node(A[i++]); q.push(p->left);}
               
               if(A[i]==-1)
               {p->right = NULL; i++;}
               else {p->right = new Node(A[i++]); q.push(p->right);}
           }
       }
       return root;
    }

};


class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       find(root);
    }    
    
    void find(Node * root)
    {
        if(!root) return ;
        
        if(root->left)
        {
            if(root->right)
            root->left->nextRight= root->right;
            else
            if(root->nextRight)
            root->left->nextRight= (root->nextRight->left)?root->nextRight->left:root->nextRight->right;
        }
        if(root->right)
        {
            if(root->nextRight)
            root->right->nextRight = (root->nextRight->left)?root->nextRight->left:root->nextRight->right;
        }
        
        
         find(root->left);
         find(root->right);
    }
      
};

int cnt =0;
int find(Node * root, int sum)
{
    if(!root) return 0;
    if(!root->left && !root->right) {cnt+= sum==root->data; return root->data;}
    int left = find(root->left, sum);
    int right = find(root->right, sum);
    if(left + right + root->data == sum) {cnt++; }
    return left + right + root->data;
}
int countSubtreesWithSumX(Node* root, int X)
{
	find(root, X);
	int ans =cnt;
	cnt =0;
	return ans;
}

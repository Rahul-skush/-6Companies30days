class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here 
        int K = M, L= N;
        while(head)
        {
            M= K;
        while(M>1 && head)
        {
            head =head->next;
            M--;
        }
        if(!head || !head->next) return ;
        Node *node = head->next;
        N =L;
        while(node && N)
        {
            Node *next = node->next;
            free(node);
            node = next;
            N--;
        }
        
        head->next = node;
        head = node;   
        }
    }
};

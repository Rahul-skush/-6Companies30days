class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int> dq;
        int i=0, j =0;
        vector<int> v;
        while(i<n)
        {
            while(i<n && !dq.empty() && dq.back()<arr[i])
            dq.pop_back();
            
            dq.push_back(arr[i]);
            
            if(i>=k-1)
            {
                v.push_back(dq.front());
                if(arr[j]==dq.front()) dq.pop_front();
                j++;
            }
            i++;
            
        }
        
        return v;
    }
};

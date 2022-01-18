class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int sum =0, i =0, j =0;
        while(i<=j && j<n)
        {
            sum += arr[j];
            if(sum==s) return {i+1, j+1};
            while(i<j && sum>s)
            sum -= arr[i++];
            if(sum==s) return {i+1, j+1};
            j++;
        }
        return {-1};
    }
};

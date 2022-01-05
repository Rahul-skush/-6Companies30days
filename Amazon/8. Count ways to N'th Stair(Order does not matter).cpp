class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        if(m==1) return 1;
        if(m==2) return 2;
        int a =1, b =2;
        for(int i=3;i<=m;i++)
        {
            int c;
            if(i&1) c =b;
            else c = a+1;
            
            a=b;
            b =c;
        }
        
        return b;
    }
};

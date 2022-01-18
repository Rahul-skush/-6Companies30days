class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int ans =0, f = 1;
        for(int i=0;i<str.size();i++)
        {
            char c = str[i];
                if(c=='-' && i==0) {f =-1; continue;}
            
            if(c>='0' && c<='9')
            ans = ans*10 + c-'0';
            else return -1;
        }
        return f*ans;
    }
};

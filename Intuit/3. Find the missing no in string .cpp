int getValue(string s, int i, int len)
{
    if(i+len>s.size()) return -1;
    int value =0;
    for(int j=i;j<i+len;j++)
    {
        value = value*10 + s[j]-'0';
    }
    return value;
}

int missingNumber(const string& str)
{
    for(int i=1;i<str.size()&&i<=6;i++)
    {
        
        int n1 = getValue(str, 0, i);
        int j = i;
        int f=0, miss;
        while(j<str.size())
        {
            
            n1 += 1;
            int len = 1+log10(n1);
            int n2 =getValue(str, j, len);
            if(n2==n1) {j= j+len; continue;}
            
            n1 += 1;
            len = 1+log10(n1);
             
             n2 =getValue(str, j, len);
             if(n1==n2) {j= j+len; miss = n1-1; f++;}
             else
            break;
        }
        
        if(f==1) return miss;
    }
    return -1;
}

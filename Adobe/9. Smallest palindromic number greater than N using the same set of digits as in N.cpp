class Solution{
  public:
    string nextPalin(string N) { 
        string s;
        for(int i=0;i<N.size()/2;i++)
        s += N[i];
        
       int i = s.size()-2;
       while(i>=0 && s[i+1]<=s[i])
       i--;
        
        int j = s.size()-1;
        while(j>i && i>=0 && s[j]<=s[i])
        j--;
        
        if(i<j && i>=0)
        swap(s[i], s[j]);
        reverse(s.begin() + i+1, s.end());
        
        string str = s;
        reverse(str.begin(), str.end());
        
        i = N.size();
        if(i%2) s += N[i/2];
        s += str;
        if(s<=N) return "-1";
        return s;
    }
};

string find(string s1, string s2)
{
    int  i=0, j =0;
    while(i<s1.size() && j<s2.size())
    {
        int cnt1 =0, cnt2 =0;
        while(i<s1.size() && s1[i]!='.')
        {cnt1 = cnt1*10 + s1[i]-'0'; i++;}
        while(j<s2.size() && s2[j]!='.')
        {cnt2 = cnt2*10 + s2[j]-'0'; j++;}
        
        if(cnt1>cnt2) return s1;
        if(cnt2>cnt1) return s2;
        i++;
        j++;
    }
    
    if(i<s1.size()) return s1;
    else return s2;
}

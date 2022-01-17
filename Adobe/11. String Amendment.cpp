class Solution{
    public:
    string amendSentence (string s)
    {
        string res;
        int i=0;
        while(i<s.size())
        {
            string str;
            str += s[i];
            i++;
            int f =0;
            while(i<s.size() && s[i]>='a' && s[i]<='z')
            {str += s[i++]; f =1;}
            
            if(str[0]>='A' && str[0]<='Z')
            str[0] = 'a' + (str[0]-'A');
            
            res += str;
            if(i<s.size())
            res += ' '; 
            
        }
        
        return res;
    }
};

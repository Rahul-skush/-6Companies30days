class Solution{
public:
    string decodedString(string s){
        // code here
        stack<string> st;
        for(auto c : s)
        {
            if(c==']')
            {
                string str, sp, no;
                while(!st.empty() && st.top()!="[")
                    {str+= st.top(); st.pop();}
                    st.pop();
                    while(!st.empty() && st.top()>="0" && st.top()<="9")
                    {no+=st.top(); st.pop();}
                    
                    reverse(no.begin(), no.end());
                    int n = stoi(no);
                    
                    while(n--)
                    sp += str;
                    st.push(sp);
            }else 
            {
                string str ;
                str+=c;
                st.push(str);
            }
        }
        string ans = st.top();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

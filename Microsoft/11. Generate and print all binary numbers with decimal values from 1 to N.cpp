vector<string> generate(int N)
{
	vector<string> v;
	v.push_back("1");
	for(int i=2;i<=N;i++)
	{
	    string s ;
	    int j =i;
	    while(j)
	    {
	        s += '0' + j%2;
	        j/=2;
	    }
	    reverse(s.begin(), s.end());
	    v.push_back(s);
	}
	return v;
}

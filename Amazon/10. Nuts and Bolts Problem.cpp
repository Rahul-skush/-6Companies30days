class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    
	    vector<char> st = {'!', '#', '$', '%', '&', '*', '@', '^', '~'};
	    
	    unordered_set<char> nut;
	    for(int i=0;i<n;i++)
	    nut.insert(nuts[i]);
	    
	     int i=0, j=0;
	     while(i<9)
	     {
	         if(nut.find(st[i])!=nut.end())
	         nuts[j++]= st[i];
	         i++;
	     }
	     
	     unordered_set<char> bolt;
	    for(int i=0;i<n;i++)
	    bolt.insert(bolts[i]);
	    
	      i=0, j=0;
	     while(i<9)
	     {
	         if(bolt.find(st[i])!=bolt.end())
	         bolts[j++]= st[i];
	         i++;
	     }
	    
	}

};

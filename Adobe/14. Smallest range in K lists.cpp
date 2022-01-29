class Solution{
    public:
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
          vector<int> v(k, 0);
          long long ansmx = INT_MAX, ansmn = INT_MIN;
          int mx = INT_MIN ;
          priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
          for(int i=0;i<k;i++)
          {pq.push({KSortedArray[i][0], 0, i}); mx = max(mx, KSortedArray[i][0]);}
          while(1)
          {
              int mn = 0;
              vector<int> v = pq.top(); pq.pop();
              mn = v[0];
              //cout<<mn<<" "<<mx<<endl;
              if(mx-mn<(ansmx - ansmn))
              {
                  ansmx = mx;
                  ansmn = mn;
              }
              
              v[1] +=1;
              if(v[1]>=n) break;
              else {pq.push({KSortedArray[v[2]][v[1]], v[1], v[2]}); mx = max(mx, KSortedArray[v[2]][v[1]]);}
          }
          
          return {ansmn, ansmx};
    }
};

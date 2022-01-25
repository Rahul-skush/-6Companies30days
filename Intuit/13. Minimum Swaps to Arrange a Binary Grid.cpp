class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int> v;
        for(int i=0;i<grid.size();i++)
        {
            int j = grid[0].size()-1, cnt=0;
            while(j>=0 && grid[i][j]==0)
                cnt++, j--;
            v.push_back(cnt);
        }
        
        int n = grid.size(), cnt =0;
        
       for(int i=0;i<v.size();i++)
       {
           if(v[i]<n-i-1)
           {
               int j = i;
               while(j<n && v[j]<n-i-1) j++;
               if(j==n) return -1;
               while(j>i){
                   swap(v[j], v[j-1]);
                   j--; cnt++;
               }
           }
       }
     
        return  cnt;
        
    }
};

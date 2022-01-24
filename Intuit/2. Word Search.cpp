class Solution {
public:
int n, m;
    bool isWordExist(vector<vector<char>>& board, string word) {
        n = board.size(), m = board[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(check(i, j, 0, board, word)) return 1;
            }
        }
        
        return 0;
    }
    
    bool check(int i, int j, int s, vector<vector<char>>& board, string &word)
    {
        if(s==word.size()) return 1;
        if(board[i][j]!=word[s]) return 0;
        char c = board[i][j];
        board[i][j] = 'A';
        for(auto d : dirs)
        {
            int x = d[0] + i, y = d[1] + j;
            if(x>=0 && y>=0 && x<n && y<m && board[x][y]!='A' && check(x, y, s+1, board, word))
            return 1;
        }
        board[i][j] = c;
        return 0;
    }
    
    vector<vector<int>> dirs = {{0,1}, {0, -1}, {1, 0}, {-1, 0}};
};

void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();
    for(int i=0;i<n/2;i++)
    {
        int tmp = -1;
        for(int j=n-i-1;j>i;j--)
        {
            int a = matrix[i][j];
            int b = matrix[n-j-1][i];
            int c = matrix[n-i-1][n-j-1];
            int d = matrix[j][n-i-1];
            matrix[n-j-1][i] = a;
            matrix[n-i-1][n-j-1] = b;
            matrix[j][n-i-1] = c;
            matrix[i][j] = d;
        }
    }
}

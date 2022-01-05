total no. of sqaures = N*N(square size 1) + (N-1)*(N-1)(square size 2) + (N-2)*(N-2)(square size 3) + . . . 3*3(square size N-3) + 2*2(square size N-1) + 1*1(square size N) ;
                     = summation(n^2) from 1 to n;
                     = n*(n+1)*(2n+1)/6;
class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        
        return N*(N+1)*(2*N+1)/6;
    }
};

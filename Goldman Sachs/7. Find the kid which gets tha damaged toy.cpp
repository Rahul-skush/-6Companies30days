class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        if(M<N-K+1) return K + M-1;
        
        M = M - (N-K+1);
        
        return M%N==0?N:M%N;
    }
};

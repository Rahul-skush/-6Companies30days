class Solution{
public:
    int minSteps(int D){
        // code here
       int f =1;
       for(int i=1;i<10000;i+=2)
       {
           if(D%2!=f) {f = 1-f; continue;}
           int x = i*(i+1)/2;
           if(x>=D) return i;
           x = (i+1)*(i+2)/2;
           if(x>=D) return i+1;
           f = 1-f;
       }
       
       return -1;
    }
};

class Solution {
public:
    double myPow(double x, long long n) {
        if(n==0) {
            return 1;
        }
        else if(n<0){
            
           return 1/myPow(x,-n);
        }
       else if (n%2==0){
          return myPow(x*x,n/2);
             
        }
        else
        {
           return x* myPow(x*x,((n-1)/2));
        }
}
};
class Solution {
public:
    double myPow(double x, int n) {
        if(x==1 || n==0) return 1;

        double res = myPow(x, n/2);
        res*=res;

        if(n%2 && n<0) return res*(1/x);
        else if(n%2 && n>0) return x*res;
        else return res;
    }
};

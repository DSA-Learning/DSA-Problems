class Solution {
public:
    double myPow(double x, int n) {
        long long a,b,c,d,e;
        double y=1;
        a=n;
        if(a<0)
            a=a*(-1);
        while(a)
        {
            if(a%2)
            {
                y=x*y;
                a--;
            }
            else
            {
                x=x*x;
                a/=2;
            }
        }
        if(n==0)
            return 1;
        if(n<0)
        {
            return (double)1/y;
        }
        else
            return y;
    }
};

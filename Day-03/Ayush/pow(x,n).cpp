// let's take an eg: we want to find 2^10
// (2)^10 =(2*2)^5 -> ((2)^2)^5) -->(4)^5
// (4)^5 =4*(4)^4
// (4)^4=(4*4)^2 --> (16)^2
// (16)^2=(16*16)^1 -->(256)^1
So by the following observation we can see that
//   if n%2==0
//       x*x;
//       n=n/2
//    else
//      ans=ans*x;
//       n=n-1

class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
       long long a=n;
//        if the number is negative so we make it postive and in last we make it reverse
        if(a<0)
        {
            a*=-1;
        }
        while(a){
            if(a%2)
            {
                ans*=x;
                a--;
            }
            else
            {
                x*=x;
                a/=2;
            }
        }
//         we just reverse the number a^-1=1/a 
        if(n<0)
            ans=(double)(1.0)/(double)(ans);
        return ans;
    }
};

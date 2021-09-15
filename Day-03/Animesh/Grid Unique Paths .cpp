class Solution {
public:
    int uniquePaths(int m, int n) {
        long long a,b,c,d;
        --m;
        --n;
        a=max(m,n);
        b=min(m,n);
        if(a==0 || b==0)
            return 1;
        c=a+b;
        d=1;
        n=1;
        for(m=a+1;m<=c;m++)
        {
            d=d*m;
        }
        for(m=1;m<=b;m++)
            n=n*m;
        return d/n;
    }
};

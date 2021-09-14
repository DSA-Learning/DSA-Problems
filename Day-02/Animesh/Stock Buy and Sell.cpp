class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a,b=INT_MAX,c=0,d,e;
        for(a=0;a<prices.size();a++)
        {
            b=min(b,prices[a]);
            c=max(c,prices[a]-b);
        }
        return c;
    }
};

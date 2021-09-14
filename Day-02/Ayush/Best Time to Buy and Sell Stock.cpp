class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pr=0,i,mn=INT_MAX,ans=0;
        for(i=0;i<prices.size();i++)
        {
            mn=min(mn,prices[i]);
            pr=max(pr,prices[i]-mn);
        }
        return pr;
    }
};

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a = INT_MIN, b = 0;
 
    for (int i = 0; i < nums.size(); i++)
    {
        b = b + nums[i];
        if (a < b)
            a = b;
 
        if (b < 0)
            b = 0;
    }
    return a;
    }
};

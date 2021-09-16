class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a,b,c,d;
        vector<int> v(2,0);
        for(a=0;a<nums.size();a++)
        {
            for(b=nums.size()-1;b>=a+1;b--)
            {
                if(nums[a]+nums[b]==target)
                {
                    v[0]=a;
                    v[1]=b;
                    return v;
                }
            }
        }
        return v;
    }
};

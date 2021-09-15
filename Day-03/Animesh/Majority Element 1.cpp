class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a=1,b,c,d=(nums.size()/2)+1;
        sort(nums.begin(),nums.end());
        for(b=1;b<nums.size();b++)
        {
            if(nums[b]==nums[b-1])
            {
                a++;
                c=nums[b];
            }
            else
                a=1;
            if(a==d)
                return c;
        }
        return nums[0];        
    }
};
    

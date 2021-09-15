class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int a,b,c,d;
        for(a=nums.size()-1;a>0;a--)
        {
            if(nums[a]>nums[a-1])
                break;
        }
        --a;
        if(a==-1)
            reverse(nums.begin(),nums.end());
        else
        {
            for(b=nums.size()-1;b>0;b--)
            {
                if(nums[b]>nums[a])
                {
                    swap(nums[b],nums[a]);
                    break;                    
                }
            }
            reverse(nums.begin()+a+1,nums.end());
        }
    }
};

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a=1,b,c,d=(nums.size()/3)+1,e=INT_MIN;
        vector<int> v;
        if(nums.size()==1)
            return nums;
        if(nums.size()==2)
        {
            if(nums[0]==nums[1])
            {
                v.push_back(nums[0]);
                return v;
            }
            else
                return nums;
        }
        sort(nums.begin(),nums.end());
        for(b=1;b<nums.size();b++)
        {
            if(nums[b]==nums[b-1])
            {
                a++;
                c=nums[b];
            }
            else
            {
                a=1;
            }
            if(a==d)
            {
                e=c;
                if(v.size()==0 || e!=v[v.size()-1])
                v.push_back(e);
            }
        }
        return v;
    }
};

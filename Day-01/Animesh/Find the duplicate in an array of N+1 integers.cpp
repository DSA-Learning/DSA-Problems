class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v=nums;
        sort(v.begin(),v.end());
        for(int a=0;a<nums.size();a++)
        {
            if(v[a]==v[a+1])
                return v[a];
        }
        return -1;
    }
};

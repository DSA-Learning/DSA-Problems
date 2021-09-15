class Solution {
public:
    int majorityElement(vector<int>& nums) {
             int res=0,n=nums.size(),c=1,i;
        for(i=1;i<n;i++)
        {
            if(nums[res]==nums[i])
                c++;
            else
                c--;
            if(c==0)
            {
                res=i,c=1;
            }
                
        }
        c=0;
        for(i=0;i<n;i++)
        {
            if(nums[res]==nums[i])
            {
                
            
                c++;}
            
           
        }
        if(c<=n/2)
                res=-1;
         return nums[res];
    }
};

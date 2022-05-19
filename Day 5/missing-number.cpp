class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),i;
            for(i=0;i<n;i++)
            {
                if(nums[i]!=i)
                    return i;                
            }
         return i;
    }
};
own

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),target1;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int j=n-1;
          target1=target-nums[i];
           while(j>i)
           {
               
               if(nums[j]==target1)
               {
                   v.push_back(i);
                   v.push_back(j);
                    break;
               }
               else
               {
                   j--;
               }                 
           }
        }
        return v;
    }
};
omw

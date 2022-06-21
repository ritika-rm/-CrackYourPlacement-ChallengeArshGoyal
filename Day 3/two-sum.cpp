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


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(target - nums[i]) != mpp.end()){
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};

using hashmap, brilliant approach, storing number and index while traversing, to find it and return it later

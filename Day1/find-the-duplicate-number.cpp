class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]==nums[i])
                break;
        }
        return nums[i];
    }
};

OR

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int x=0;
        for(auto it:mp)
        {
            if(it.second!=1)
                x=it.first;  
        }
        return x;
    }      
};


OR

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]==2)
                return nums[i]; 
        }
       
        return -1;
    }      
};

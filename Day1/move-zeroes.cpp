class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==0)
            {
                int j=i+1;
                while(nums[j]==0 and j<nums.size()-1)
                    {j++;}
               swap(nums[i],nums[j]); 
                    
            }
            
        }
        
    }
};

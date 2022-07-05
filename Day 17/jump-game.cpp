class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return true;
        else if(n==2 && nums[0]>0)
            return true;
        int i=n-1;
        int j=i-1;
        while(j>=0 && i>0)
        {
            if(nums[j]>=i-j)
            {
                if(j==0 && nums[j]>=i-j)
                    return true;
                i=j;
                j--;
                
            }
            else
            {
                j--;
            }
            
        }
        return false;
    }
};


omw with little help fromrajashree about return statement;

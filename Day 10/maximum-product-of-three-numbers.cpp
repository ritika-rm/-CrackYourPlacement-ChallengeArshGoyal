class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.rbegin(),nums.rend());
        int prod1 = (nums[0]*nums[1]*nums[2]);
        int prod2 = (nums[0]*nums[nums.size()-1]*nums[nums.size()-2]);
        return max(prod1,prod2);
    }
};

seen dicsussion because unsure about how to handle negatives :(

link for mathematical explanation ->
https://leetcode.com/problems/minimum-moves-to-equal-array-elements/discuss/2052313/Mathematical-Solution


class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
int count=0;
int p = nums[0];
for(int i=0;i<nums.size();i++)
{
count+=nums[i]-p;
}
return count;
    }
}; 
    
discussion seen, iam doing it all wrong, iam not even thinking today:(

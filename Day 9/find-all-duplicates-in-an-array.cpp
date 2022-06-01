class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> vec;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
           mp[nums[i]]++; 
        }
        for(auto& it:mp)
        {
            if(it.second==2)
                vec.push_back(it.first);
        }
        return vec;
    }
};

omw
 earlier i had attempted this question but i thought there hasto be some special way to return vector lol. it was this easy.

    
    vector<int> findDuplicates(vector<int>& nums) {
		int a[nums.size()+1];
			memset(a,-1,sizeof a);
			for(int i=0;i<nums.size();i++){
				a[nums[i]]++;
			}
			vector<int>ans;
			for(int i=1;i<=nums.size();i++){
				if(a[i]==1){
					ans.push_back(i);
				}
			}
			return ans;
			}
from discussion, using memset to assign -1 to all, and then add frequency by traversing nums array. faster soln

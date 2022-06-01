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

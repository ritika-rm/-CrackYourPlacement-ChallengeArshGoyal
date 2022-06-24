class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m+n-1;i>=m;i--)
        {
            if(nums1[i]==0)
                {swap(nums1[i],nums2[j]);
                j++;}
            
        }
        sort(nums1.begin(),nums1.end());
    }
};
entirely omown lol. i first did a silly mistake of traversing from the 0th index, which obviously showed tle, then i started form the last index and boom.
    O((m+n)log(m+n) time complexity
    
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1, TotalArrangements =m+n-1;
        while(j>=0){
            nums1[TotalArrangements--] = i>=0 && nums1[i]>nums2[j] ?nums1[i--]:nums2[j--];
        }
    }
};
      
      two pointer. O(m+n) TC.

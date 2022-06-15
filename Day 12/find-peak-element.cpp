class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1;
        if(n == 1){
            return 0;
        }
        while(start<end){
            int mid=start+(end-start)/2;

            if(mid>0 && mid<n-1){
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                    return mid;
                }
                else if(nums[mid]<nums[mid+1]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }else{
                break;
            }
        }
        if(nums[start]>nums[end]){
            return start;
        }else{
            return end;
        }
    }
};

i am still not comfortale with coding for binarysearch, even if i get the logic, i cannot seem to write properly,this is the copied soln that worked. will 
paste mine below... tried some more and mine worked too!!!!
  
  
  
  
  class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        if(nums[0]>nums[1])
                return 0;
        if(n==2)
        {
           if(nums[0]<nums[1]) 
               return 1;
        }
           
        int m,s=0,e=n-1;
        while(s<e)
        {
           m=s+(e-s)/2;
            if(nums[m+1]<nums[m] && nums[m-1]<nums[m] )
            {
                return m;
            }
            else if(nums[m+1]>nums[m])
                s=m+1;
            else
                e=m-1;
        }
        return s;
    }
    
     
};

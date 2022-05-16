class Solution {
public:
    int maxArea(vector<int>& height) {
        int ar=0;
     for(int i=0;i<height.size();i++)
     {
         int j=height.size()-1;
         while(j>i)
         {
             ar=max(ar,(j-i)*min(height[i],height[j]));
             if(height[i]<=height[j])
                i++;
             else
                 j--;
                 
          
         }
     }
        return ar;
    }
};

(saw discussions)

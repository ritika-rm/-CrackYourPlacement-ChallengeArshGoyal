class Solution {  
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=cardPoints[i];
        }
        int minSum=0, windowsum;
        for(int i=0;i<n-k;i++)
        {
            minSum+=cardPoints[i];
        }
        windowsum= minSum;
        for(int i=n-k;i<n;i++)
        {
            windowsum+=cardPoints[i]-cardPoints[i-n+k];
            minSum=min(minSum,windowsum);
        }
        
        return sum-minSum;
    }
};



used a new concept sliding window, saw gfg and asked raju

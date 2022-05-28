class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),min=10000,ans=0;
        for(int i=0;i<n;i++)
        {
           if(prices[i]<min)
               min=prices[i];
            int answer=prices[i]-min;
            if(answer>ans)
                ans=answer;
            
        }
        return ans;
    }
};

//tried the two pointer approach by taking min and max from front and back respectively. shouwed tle obviously. try to think of simple ways first and the complex. problems can be simpler than they look

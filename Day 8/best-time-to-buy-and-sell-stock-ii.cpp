class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),ans=0;
        for( int i=0;i<n-1;i++)
        {     
            int j=i+1;
             if(prices[j]>prices[i])
                 ans=ans+prices[j]-prices[i];
        }
        
       return ans; 
    }
};

seen discussion
my initial approach: thought on similar lines of best time to buy sell1, finding max answer for each min, then i thought, i would re-initialise min to 10^4 again, to find
new min, and then find the max answer and keep adding. silly approach lol

this approach- O(n)-where when searching for the max profit for each minimum,we can keep adding the differences, i.e, for 7,1,4,5,3 it an be seen that 5-1 gives = 4
  which is max, but 4-1+5-4 is also the same. so here simply by checking if the next number is greater or not, we can keep adding.

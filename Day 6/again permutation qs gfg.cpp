https://practice.geeksforgeeks.org/contest/job-a-thon-9-hiring-challenge/problems/
class Solution {
  public:
    int solve(int N, vector<int> &A) {
        // code here
        long long x=1,count=0,M=1000000007,q=1;
        map<int,int> mp;
        for(int i=0;i<N;i++)
        {
            mp[A[i]]++;
        }
        
        for(auto& it:mp)
        {
            if(mp.find(q)==mp.end())
            return count%M;
            x=(x*it.second)%M;
            count=(count+x)%M;
            q++;
        }
        return count%M;
    }
};
50% accepted

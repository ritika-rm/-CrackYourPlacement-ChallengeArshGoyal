https://practice.geeksforgeeks.org/contest/job-a-thon-9-hiring-challenge/problems/
class Solution {
  public:
    int solve(int N, vector<int> &A) {
        // code here
        map<int,int> mp;
        for(int i=0;i<N;i++)
        {
            mp[A[i]]++;
        }
        int a=0;
        for(auto& it:mp)
        {
            if(mp.find(a)!=mp.end())
            a++;
            else
            break;
        }
        return a;
    }
};
took help to know about the find function.
  not arsh goyal sheet

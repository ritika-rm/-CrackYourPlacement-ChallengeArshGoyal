class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
      int ans=INT_MAX;
       sort(a.begin(),a.end());
       for(int i=0 ;i<n ;i++){
           if( (i+m-1) >= n)
               break;
           int diff=a[i+m-1]-a[i];
           ans=min(ans,diff);
    }
    return ans;
    }   
};
 smnelse's
   
   sort(a.begin(),a.end());
    int j,ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        j=i+m-1;
        while(j<n)
        {
            int answer=a[j]-a[i];
            if(answer<ans)
            ans=answer;
        }
        
    }
mine, looks similar to me, and i tried this first but showed TLE, will undertand the cause

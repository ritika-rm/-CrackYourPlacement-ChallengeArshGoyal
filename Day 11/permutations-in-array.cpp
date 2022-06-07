https://www.geeksforgeeks.org/permute-two-arrays-sum-every-pair-greater-equal-k/


class Solution {
  public:
    bool isPossible(long long a[], long long b[], long long n, long long k) {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++)
        {
            if((a[i]+b[n-i])<k)
            {
                return false;
                break;
            }
        }
        return true;
    }
};


did entirely omw, easy, gfg doesnt allow, a.begin() or a.rbegin() for sorting in arrays.

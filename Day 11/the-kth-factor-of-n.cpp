class Solution {
public:
    int kthFactor(int n, int k) {
        
        int cnt = 0;
		
        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                cnt++;
            }
            if(cnt == k) {
                return i;
            }
        }
        return -1;
    }
};

soln that passes, seen discussion

class Solution {
public:
    int kthFactor(int n, int k) {
        int i=1,j=0;
         while(n>=1)
            {
                if(n%i==0)
                {
                   n=n/i;
                   
                    j++;
                    if(j==k)
                        {return i;
                        break;}
                }
                 i++;
            }

        return -1;
        
      
    }
   
};

my initial soln, idk why would i even do this ;), like the first one is a very basic approach ;). i should have thought of that ;)

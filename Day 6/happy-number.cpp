class Solution {
public:
    bool isHappy(int n) {
        if(n==1||n==7)
            return true;
        while(n>9)
        {
            int sum=0;
            while(n!=0)
            {
                int rem =n%10;
                sum+=pow(rem,2);
                n=n/10;
            }
            if(sum==1||sum==7)
            {
                return true;
                break;
            }
            n=sum;
        }
        return false;
    }
};
solnafterseeingdiscussion

class Solution {
public:
bool isHappy(int n) {
        if(n<10) n=n*n;
        while(n>9){
            long long sum=0;
            while(n){
                sum = pow(n%10,2)+ sum;
                n/=10;
            }
            n=sum;
        }
        if(n==1 or n==7) return true;
        return false;
    }
   }; 
    referreddiscussion

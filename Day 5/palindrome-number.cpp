class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string S=to_string(x);
        
        for(int i=0;i<=S.length()/2;i++)
        {
            int j=S.length()-1-i;
            if(S[i]!=S[j])
            {
                return false;
                break;
            }
        }
        return true;
    }
};

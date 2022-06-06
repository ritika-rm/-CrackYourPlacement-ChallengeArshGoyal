class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        
        int i=a.length()-1;
        int j=b.length()-1;
        string ans;
        while(i>=0 && j>=0){
            
            if(carry==0){
                if(a[i]=='0'){
                    if(b[j]=='0'){
                        ans+='0';
                    }
                    else{
                        ans+='1';
                    }
                }
                else{
                    if(b[j]=='0'){
                        ans+='1';
                    }
                    else{
                        ans+='0';
                        carry=1;
                    }
                }
            }
            else{
                 if(a[i]=='0'){
                    if(b[j]=='0'){
                        ans+='1';
                        carry=0;
                    }
                    else{
                        ans+='0';
                    }
                }
                else{
                    if(b[j]=='0'){
                        ans+='0';
                    }
                    else{
                        ans+='1';
                    }
                }
            }
            i--;
            j--;
        }
        
        while(i>=0){
            if(carry==0){
                ans+=a[i];
            }
            else{
                if(a[i]=='0'){
                    ans+='1';
                    carry=0;
                }
                else{
                    ans+='0';
                }
            }
            i--;
        }
        while(j>=0){
            if(carry==0){
                ans+=b[j];
            }
            else{
                if(b[j]=='0'){
                    ans+='1';
                    carry=0;
                }
                else{
                    ans+='0';
                }
            }
            j--;
        }
        if(carry==1)
            ans+='1';
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

very basic but long, so didnt write, saw from description

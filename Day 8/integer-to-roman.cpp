class Solution {
public:
    string intToRoman(int num) {
        string S="";
        while(num>=1000)
        {
            S+="M";
            num-=1000;
        }
        while(num>=500)
        {
            if(num>=900)
               {
                 S+="CM";
                 num-=900;
               }
            else
            {
                S+="D";
                num-=500;
            }                
        }
        while(num>=100)
        {
            if(num>=400)
            {
                S+="CD";
                num-=400;
            }
            else
            {
                S+="C";
                num-=100;
            }
        }
        while(num>=50)
        {
            if(num>=90)
               {
                 S+="XC";
                 num-=90;
               }
            else
            {
                S+="L";
                num-=50;
            }                
        }
        while(num>=10)
        {
            if(num>=40)
            {
                S+="XL";
                num-=40;
            }
            else
            {
                S+="X";
                num-=10;
            }
        }
        while(num>=5)
        {
            if(num==9)
               {
                 S+="IX";
                 num-=9;
               }
            else
            {
                S+="V";
                num-=5;
            }                
        }
        while(num>=1)
        {
            if(num==4)
            {
                S+="IV";
                num-=4;
            }
            else
            {
                S+="I";
                num-=1;
            }
        } 
        
        return S;
    }
};

very naive approach

class Solution {
public:
    string intToRoman(int num) {
        int intEquivalent[]=      { 1000,900 ,500,400 ,100,90  ,50 ,40  ,10 , 9  , 5 , 4  , 1 };
        string romanEquivalent[]= { "M" ,"CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans;
        
        for(int i=0;i<13;i++) {
            while(num>=intEquivalent[i]) {
                ans+=romanEquivalent[i];
                num-=intEquivalent[i];
            }
        }
        return ans;
    }
};

map approach, from discussion

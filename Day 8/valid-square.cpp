class Solution {
    int distance(vector<int> p1,vector<int> p2){
    
    return(pow(p1[0]-p2[0],2)+pow(p1[1]-p2[1],2));

}
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        if(p1==p2 || p1==p3 || p1==p4 || p3==p2 || p4==p2 || p4==p3)
        return false;
        unordered_map<int,int> mp;
        mp[distance(p1,p2)]++;
        mp[distance(p1,p3)]++;
        mp[distance(p1,p4)]++;
        mp[distance(p2,p3)]++;
        mp[distance(p2,p4)]++;
        mp[distance(p3,p4)]++;
         bool cndn1=false,cndn2=false;
    for(auto x:mp){
        if(x.second==4){
            cndn1=true;
        }
        if(x.second==2){
            cndn2=true;
        }
    }
         return cndn1 && cndn2;
    }
};
seen discussion

my initial approach was similar, but i created a vector of floats where i pushed rootover of sum of squares(or simply the distances), then i sorted it, then i was 
checking for the it.second part because it.second has to be 2 values. 2 and 4 for it to be true. so iiterate through it.second. but somehow its showed wrong for basic 
points like p1 = [0,0], p2 = [1,1], p3 = [1,0], p4 = [0,1]. i also hadnt taken the case where 2 points if equal can never be true. 
  
  
  class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        if(p1==p2 || p1==p3 || p1==p4 || p3==p2 || p4==p2 || p4==p3)
        return false;
        vector<int> vec;
        vec.push_back((pow((abs(p1[0] - p2[0])),2))+(pow((abs(p1[1] - p2[1])),2)));
        vec.push_back((pow((abs(p1[0] - p3[0])),2))+(pow((abs(p1[1] - p3[1])),2)));
        vec.push_back((pow((abs(p1[0] - p4[0])),2))+(pow((abs(p1[1] - p4[1])),2)));
        vec.push_back((pow((abs(p2[0] - p3[0])),2))+(pow((abs(p2[1] - p3[1])),2)));
        vec.push_back((pow((abs(p2[0] - p4[0])),2))+(pow((abs(p2[1] - p4[1])),2)));
        vec.push_back((pow((abs(p3[0] - p4[0])),2))+(pow((abs(p3[1] - p4[1])),2)));
        map<int,int> mp;
        for(int i =0;i<vec.size();i++)
        {
            mp[vec[i]]++;
        }
         bool cndn1=0,cndn2=0;
    for(auto x:mp){
        if(x.second==4){
            cndn1=1;
        }
        if(x.second==2){
            cndn2=true;
        }
    }
         return cndn1 && cndn2;
    }
};
my approach but last part is copied from discussion;

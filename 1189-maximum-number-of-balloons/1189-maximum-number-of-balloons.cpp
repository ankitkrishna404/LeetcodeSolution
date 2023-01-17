class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>map;
        int ballon_cnt=INT_MAX;
        
        
        for(auto x:text){
            if(x=='b' or x=='a' or x=='l' or x=='o' or x=='n')
                map[x]++;
        }
        
        string s = "balloon";
        
        for(auto x:s){
            if(!map.count(x))return 0;
            
            if(x == 'l' or x =='o')
                ballon_cnt = min(ballon_cnt, map[x]/2);
            else
                ballon_cnt = min(ballon_cnt, map[x]);
        }
        
        
        return ballon_cnt;
    }
};
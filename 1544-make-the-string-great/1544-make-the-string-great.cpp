class Solution {
public:
    string makeGood(string s) {
        while(true) {
            bool cnt = 0;
            for(int i=1; i<size(s); i++) {
                if(s[i-1]-'a' == s[i]-'A' or s[i-1]-'A' == s[i]-'a') {
                    s.erase(i-1, 2);//erase both index
                    cnt = 1;
                    break;//terminate loop and check for new string
                }
            }
            if(!cnt) break;
        }
        return s;
    }
};
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size();
        int start = 0;
        for(int i=0;i<n;i++)
        {
           if(s[start] == t[i])
           start++;
        }
        return (start == s.size());
    }
};
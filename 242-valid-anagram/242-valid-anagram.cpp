class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> h,k;
        for(auto i:s)
        {
            h[i]++;
        }
        for(auto i:t)
        {
            k[i]++;
        }
        return (h==k);
    }
};
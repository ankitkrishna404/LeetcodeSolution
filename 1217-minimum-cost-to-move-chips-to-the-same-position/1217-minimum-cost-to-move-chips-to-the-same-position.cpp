class Solution {
public:
    int minCostToMoveChips(vector<int>& v) {
        int even=0,odd=0;
        for(int i=0;i<v.size();i++)
        {
          if(v[i]%2 == 0)
              even++;
          else
          {
              odd++;
          }
            
        }
        return even>odd ? odd : even;
             
    }
};
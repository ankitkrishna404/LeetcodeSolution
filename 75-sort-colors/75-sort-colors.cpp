class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zc=0,oc=0,tc=0;
        for(auto i:nums)
        {
            if(i == 0)
                zc++;
            else if(i == 1)
                oc++;
            else tc++;
        }
        for(int i=0;i<nums.size();i++)
        {
            while(zc--)
            {
                nums[i]=0;
                i++;
            }
             while(oc--)
            {
                nums[i]=1;
                i++;
            }
             while(tc--)
            {
                nums[i]=2;
                i++;
            }
        }
    }
};
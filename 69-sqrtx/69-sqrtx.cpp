class Solution {
public:
    int mySqrt(int x) {
        long long lo=1,hi=x,mid,ans;
        while(lo <= hi)
        {
            mid=(lo+hi)/2;
            long long msq=mid*mid;
            if(msq == x) return mid;
            else if(msq > x)
            {
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
                ans =mid;
            }
        }
        return ans;
    }
    
};
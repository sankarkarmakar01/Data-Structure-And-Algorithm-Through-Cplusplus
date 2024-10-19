// LeetCode - 69

class Solution {
public:
    int mySqrt(int x) {
        if(x<2) {
            return x;
        }
        long long ans,mid,start,end;
        start = 0;
        end = x;
        while(start<=end)
        {
            mid = start + (end - start)/2;
            if(mid * mid == x)
            {
                ans = mid;
                break;
            }
            else if(mid * mid < x)
            {
                ans = mid;
                start = mid + 1;
            }
            else 
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};

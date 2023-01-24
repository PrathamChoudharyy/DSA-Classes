// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans=0;
        long long low=0, high=n;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            if(isBadVersion(mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};

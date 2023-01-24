class Solution {
public:
    int mySqrt(int x)
    {
        long low = 1,high = x ,mid;
        while(low<=high){
            mid=(low+high)/2;
            if((mid*mid)==x){
                return mid;
            }
            if((mid*mid)<=x){
                if(((mid+1)*(mid+1))>x)
                {
                    return mid;
                }
                low = mid+1;
            }
            else if((mid*mid)>x){
                high = mid-1;
            }
        }
        return 0;
    }
};

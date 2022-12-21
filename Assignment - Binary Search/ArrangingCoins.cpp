class Solution {
public:
    int arrangeCoins(int n) {
        long l=1,h=n, mid;
        while(l<=h){
            mid=(l+h)/2;
            if(coins(mid)<=n){
                if(coins(mid+1)>n){
                    if(n-coins(mid)<mid){
                        return mid;
                    }
                    else{
                        return mid;
                    }
                }
                l=mid+1;
            }
            else
                h=mid-1;
        }
        return h;

    }
    long coins(long a){
    return (a*(a+1))/2;
    }
};

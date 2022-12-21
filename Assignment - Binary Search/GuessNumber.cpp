class Solution {
public:
    int guessNumber(int n) {
        int a=guess(n);
        if(a==-1){
            return guessNumber(n-1);
        }
        else if(a==0){
            return n;
        }
        else{
            return guessNumber(n+1);
        }
    }
};

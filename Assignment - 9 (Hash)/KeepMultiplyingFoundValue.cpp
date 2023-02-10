class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        // set<int>::iterator it;
        int m=original;
        while(s.find(m)!=s.end()){
            m=m*2;
        }
        return m;
    }
};

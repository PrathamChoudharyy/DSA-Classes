class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int sum=0;
        map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second==1){
                sum+=it->first;
            }
        }
        return sum;
    }
};

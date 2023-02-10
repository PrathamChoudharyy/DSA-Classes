class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second==2){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};

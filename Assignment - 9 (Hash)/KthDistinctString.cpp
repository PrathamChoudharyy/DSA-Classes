class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int count=0;
        for(int j=0;j<arr.size();j++){
            if(mp[arr[j]]==1){
                count++;
                if(count==k){
                    return arr[j];
                }
            }
        }

        return "";
    }
};

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(lowerbound(nums,target));
        ans.push_back(upperbound(nums,target));
        return ans;
    }
    int lowerbound(vector<int> &nums, int target){
        int l, h, ans=-1;
        l=0;
        h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]>=target){
                if(nums[mid]==target){
                    ans=mid;
                }
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    int upperbound(vector<int> &nums, int target){
        int l, h, ans=-1;
        l=0;
        h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]<=target){
                if(nums[mid]==target){
                    ans=mid;
                }
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};

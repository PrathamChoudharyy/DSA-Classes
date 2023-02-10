class Solution {
public:
    int reversed(int num) {
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return reversed;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> numsSet{begin(nums), end(nums)};

        for (const int num : nums)
            numsSet.insert(reversed(num));

        return numsSet.size();
    }
};

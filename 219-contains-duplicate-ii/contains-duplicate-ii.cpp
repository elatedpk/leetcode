class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> num;
        for (int i = 0; i < nums.size(); i++) {
            if (i > k)
                num.erase(nums[i - k - 1]);
            if (num.count(nums[i]))
                return true;
            num.insert(nums[i]);
        }
        return false;
    }
};
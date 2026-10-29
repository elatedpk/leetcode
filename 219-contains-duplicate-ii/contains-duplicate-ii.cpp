class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set <int> num;
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > k)
                num.erase(nums[j++]);
            if(num.count(nums[i]))
                return true;
            num.insert(nums[i]);
            
        }
        return false;
    }
};
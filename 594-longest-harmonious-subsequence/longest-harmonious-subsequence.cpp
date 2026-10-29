class Solution {
public:
    int findLHS(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1)
            return 0;

        unordered_map<int, int> freq;
        int length {0};
        
        for (int i : nums)
            freq[i]++;

        for (const auto& [k, v] : freq) {
            if (freq.count(k - 1))
                length = max(length, v + freq[k - 1]);
        }
        return length;
    }
};
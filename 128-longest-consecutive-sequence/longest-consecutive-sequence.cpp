class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
        sort(nums.begin(),nums.end());
        int current = 1;
        long long last = LLONG_MIN;
        int length = 1;
        for(int num : nums){
            if(num == last + 1){
                current++;
                last = num;
            } else if (num != last){
                current = 1;
                last = num;
            }
            length = max(length,current);
        }
        return length;
    }
};
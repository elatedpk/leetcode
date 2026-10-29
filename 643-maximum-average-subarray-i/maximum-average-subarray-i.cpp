class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg {0};
        for (int i = 0; i < k; i++) {
            avg += nums[i];
        }
        double v_avg = avg;
        for (int left = k; left < nums.size(); left++) {
            v_avg += nums[left] - nums[left - k];
            avg = max(avg, v_avg);
        }
        return avg / k;
    }
};
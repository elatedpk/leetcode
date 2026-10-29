class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int right {k};
        double avg {0};
        for (int i = 0; i < k; i++) {
            avg += (double) nums[i]/k;
        }
        double v_avg = avg;
        for (int left = 1; right < nums.size(); left++) {
            v_avg += (double)(nums[right] - nums[left - 1])/ k;
            avg = max(avg, v_avg);
            right++;
        }
        return avg;
    }
};
class Solution {
public:
    void replace(vector<int>& nums, int i, int j) {
        while( i < j){
            swap(nums[i++],nums[j--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        replace(nums, 0, n - k - 1);
        replace(nums, n - k, n - 1);
        replace(nums, 0, n - 1);
    }
};

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector <long long> sqr;
        for (int i = 0; i < nums.size(); i++)
            sqr.push_back(1LL * nums[i] * nums[i]);
        long long answer = 0;
        int k = nums.size()/2;
        sort(sqr.begin(), sqr.end());
        for(int i = 0; i < k; i++)
            answer -= sqr[i];
        for(int i = k; i < sqr.size(); i++)
            answer += sqr[i];
        return answer;
    }
};
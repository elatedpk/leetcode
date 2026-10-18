class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int left = 0;
        int right = num.size() - 1;
        while (left < right){
            if(num[left] + num[right] == target){
                return {left+1,right+1};
            }
            if((num[right]+num[left]) > target)
                right--;
            else 
                left++;
        }
        return {};
    }
};
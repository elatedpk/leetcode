class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map <int,int> c;
       for(int i = 0; i < nums.size(); i++){
           if(c.contains(target - nums[i]))
                return {i,c[target - nums[i]]}; 
            else
                c[nums[i]] = i;
       }
       return {};
    }
};
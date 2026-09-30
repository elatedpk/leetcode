class Solution {
public:
    int rob(vector<int>& nums) {
        int money = 0, current = 0;
        for(int i : nums){
            int temp = max(money, current + i);
            current = money;
            money = temp;
        }
        return money;
    }
};
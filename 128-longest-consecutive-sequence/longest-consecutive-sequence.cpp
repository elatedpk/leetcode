class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> set;
        for(int i : nums)
            set.insert(i);
        int length = 0;
        for(int num : set){
            if(set.find(num-1) == set.end()){
                int seq = 1;
                while(set.find(num+1) != set.end()){
                    seq++;
                    num++;
                }
                length = max(length,seq);

            }
        }
        return length;
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int total = 0;
        int lmax = 0;
        int rmax = 0;
        while(left < right){
            lmax = max(height[left],lmax);
            rmax = max(height[right],rmax);
            if(lmax < rmax){
                total += lmax - height[left];
                left++;
            } else {
                total += rmax - height[right];
                right--;
            }
        }
        return total;
    }
};
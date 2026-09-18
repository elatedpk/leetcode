class Solution {
public:
    bool isHappy(int n) {
        if(n == 1 || n == 7)
            return true;
        else if(n < 10)
            return false;
        else{
            int t, sum {};
            while(n > 0){
                t = n % 10;
                sum += t * t;
                n = n / 10;
            }
            return isHappy(sum);
        }
    }
};
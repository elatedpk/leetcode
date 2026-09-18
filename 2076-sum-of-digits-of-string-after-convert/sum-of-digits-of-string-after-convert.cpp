class Solution {
public:
    int getLucky(string s, int k) {
        int sum {};
        for(char ch : s){
            int a = ch - 'a' + 1;
             while( a > 0){
                sum += a % 10;
                a /= 10;
             }
        }
        k--;
        while(k--){
            int t = sum;
            sum = 0;
            while(t != 0){
                sum += t % 10;
                t /= 10;
                
            }
        }
        return sum;
    }
};
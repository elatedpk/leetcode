class Solution {
public:
    bool judgeSquareSum(int c) {
        long a = 0;
        long b = sqrt(c);
        while(a <= b){
            long sq = a*a + b*b;
                if ( sq == c){
                    return true;
                }
                else if( sq < c){
                    a++;
                }
                else if( sq > c){
                    b--;
                }      
        }
        return false;
    }
};
class Solution {
public:
    double angleClock(int hour, int minutes) {
        if (hour == 12) {
            hour = 0;
        }
        if (minutes == 60) {
            minutes = 0;
        }
        float ha = 0.5 * (hour * 60 + minutes);
        float hm = minutes * 6;
        float an = abs(ha - hm);
        return min(an, 360 - an);
    }
};
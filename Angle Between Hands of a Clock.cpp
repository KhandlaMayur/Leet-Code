class Solution {
public:
    double angleClock(int hour, int minutes) {
        double result = abs((60 * hour) - (11 * minutes))/ 2.0 ;
        return min(result, 360 - result);  
    }
};

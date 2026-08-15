class Solution {
  public:
    int numOfDays(int d1, int m1, int y1, int d2, int m2, int y2) {
        // code here
        int previousyear1 = y1 - 1;
        int previousyear2 = y2 - 1;
        
        int leapyear1 = previousyear1 / 4 - previousyear1 / 100 + previousyear1 / 400;
        int leapyear2 = previousyear2 / 4 - previousyear2 / 100 + previousyear2 / 400;
        
        int day1 = previousyear1 * 365 + leapyear1;
        int day2 = previousyear2 * 365 + leapyear2;
        
        int daymonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i = 0; i < m1 - 1; i++){
            day1 += daymonth[i];
        }
        
        for(int i = 0; i < m2 - 1; i++){
            day2 += daymonth[i];
        }
        
        if((y1 % 400 == 0  || (y1 % 4 == 0 && y1 % 100 != 0)) && m1 > 2){
            day1 += 1;
        }
        
        if((y2 % 400 == 0  || (y2 % 4 == 0 && y2 % 100 != 0)) && m2 > 2){
            day2 += 1;
        }
        
        d1 += day1;
        d2 += day2;
        
        return abs(d1 - d2);
    }
};

class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        int year1 = stoi(date1.substr(0, 4));
        int month1 = stoi(date1.substr(5, 2));
        int day1 = stoi(date1.substr(8, 2));

        int year2 = stoi(date2.substr(0, 4));
        int month2 = stoi(date2.substr(5, 2));
        int day2 = stoi(date2.substr(8, 2));

        int previousyear1 = year1 - 1;
        int previousyear2 = year2 - 1;

        int leapyear1 = previousyear1 / 4 - previousyear1 / 100 + previousyear1 / 400;
        int leapyear2 = previousyear2 / 4 - previousyear2 / 100 + previousyear2 / 400;

        int days1 = previousyear1 * 365 + leapyear1;
        int days2 = previousyear2 * 365 + leapyear2;

        int daymonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i = 0; i < month1 - 1; i++){
            days1 += daymonth[i]; 
        }
        for(int i = 0; i < month2 - 1; i++){
            days2 += daymonth[i]; 
        }

        if((year1 % 400 == 0 || (year1 % 4 == 0 && year1 % 100 != 0)) && month1 > 2){
            days1 += 1;
        }
        if((year2 % 400 == 0 || ((year2 % 4 == 0 && year2 % 100 != 0)) && month2 > 2)){
            days2 += 1;
        }

        days1 += day1;
        days2 += day2;

        return abs(days1 - days2);
    }
};

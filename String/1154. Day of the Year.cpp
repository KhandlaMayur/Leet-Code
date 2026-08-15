class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int currday = stoi(date.substr(8, 2));

        int daymonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int day = 0;
        for(int i = 0; i < month - 1; i++){
            day += daymonth[i];
        }

        if((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && month > 2){
            day += 1;
        }

        return day + currday;
    }
};

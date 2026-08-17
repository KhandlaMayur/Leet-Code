class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

        int arrivealicemonth = stoi(arriveAlice.substr(0,2));
        int arrivealiceday = stoi(arriveAlice.substr(3,2));

        int leavealicemonth = stoi(leaveAlice.substr(0,2));
        int leavealiceday = stoi(leaveAlice.substr(3,2));

        int arrivebobmonth = stoi(arriveBob.substr(0,2));
        int arrivebobday = stoi(arriveBob.substr(3,2));
        
        int leavebobmonth = stoi(leaveBob.substr(0,2));
        int leavebobday = stoi(leaveBob.substr(3,2));

        int daymonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int alicestart = arrivealiceday;
        int aliceend = leavealiceday;

        for(int i = 0; i < arrivealicemonth - 1; i++){
            alicestart += daymonth[i];
        }
        for(int i = 0; i < leavealicemonth - 1; i++){
            aliceend += daymonth[i];
        }

        int bobstart = arrivebobday;
        int bobend = leavebobday;

        for(int i = 0; i < arrivebobmonth - 1; i++){
            bobstart += daymonth[i];
        }
        for(int i = 0; i < leavebobmonth - 1; i++){
            bobend += daymonth[i];
        }

        int start = max(alicestart, bobstart);
        int end = min(aliceend, bobend);

        if(start > end){
            return 0;
        }
        return end - start + 1;
    }
};

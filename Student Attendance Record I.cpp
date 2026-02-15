class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0;
        int consecutiveL = 0;

        for(int i = 0; i < s.length(); i++) {
            
            // Count Absences
            if(s[i] == 'A') {
                countA++;
                if(countA >= 2) {
                    return false;
                }
            }
            
            // Count consecutive Lates
            if(s[i] == 'L') {
                consecutiveL++;
                if(consecutiveL >= 3) {
                    return false;
                }
            } 
            else {
                consecutiveL = 0;  // Reset if not 'L'
            }
        }

        return true;
        
    }
};

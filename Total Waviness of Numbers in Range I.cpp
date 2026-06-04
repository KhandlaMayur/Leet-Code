class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int total = 0;
        for(int num = num1; num <= num2; num++){
            string s = to_string(num);

            if(s.length() < 3){
                continue;
            }
            int waviness = 0;
            for(int i = 1; i < s.length()-1; i++){
                if(s[i] > s[i-1] && s[i] > s[i+1]){
                    waviness++;
                }
                if(s[i] < s[i-1] && s[i] < s[i+1]){
                    waviness++;
                }
            }
            total += waviness;
        }
        return total;
        
    }
};

class Solution {
public:
    int alternateDigitSum(int n) {
        int count = 0;
        int evenplace = 0;
        int oddplace = 0;
        while(n > 0){
            int temp = n % 10;
            if(count % 2 == 0){
                evenplace += temp;
            }else{
                oddplace += temp;
            }
            count++;
            n /= 10;
        }
        return (count % 2 != 0) ? (evenplace - oddplace) : (oddplace - evenplace);
        
    }
};

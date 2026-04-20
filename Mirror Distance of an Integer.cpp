class Solution {
public:
    int mirrorDistance(int n) {
        int original = n;
        int rev = 0;

        int temp = abs(n);
        while(temp != 0){
        int digit = temp % 10;
        rev = (rev * 10) + digit;
        temp = temp/10;
        }
        return abs(original - rev);

    }
};  

class Solution {
public:
    bool isPalindrome(int x) {
        // if(x<0){
        //     return false;
        // }
        if(x<0) return false;
        // int rev = 0;   // Not suitable for long integer 
        long long rev=0;
        int original = x;
        while(x > 0){
            int digit = x % 10;
            rev = (rev * 10) + digit;
            x = x / 10;
        }
        // if(original == rev){
        //     return true;
        // }
        // return false;
        return original == rev;
    }
};

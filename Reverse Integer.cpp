class Solution {
public:
    int reverse(int x) {
        // int rev = 0;
        // // int digit = x;
        // int n = x;
        // int sign = 1;
        // if(n < 0){
        //     sign = -1;
        //     n = -n;
        // }
        // while(n > 0){
        //     int digit = n % 10;
        //     rev = (rev * 10) + digit;
        //     n = n / 10;
        // }

        // rev = rev * sign;
        // return rev;
        // In this case some test case is right but when input is very long then out some test case is overflow 


        int rev = 0;
        // int sign = 1;
        // if(x < 0){
        //     sign = -1;
        //     x = -x;
        // }

        while(x != 0){
            int digit = x % 10;

            if(rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }

            rev = (rev * 10) + digit;
            x /= 10;

        }
        // rev = rev*sign;
        return rev;

    }
};

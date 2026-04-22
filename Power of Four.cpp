class Solution {
public:
    bool isPowerOfFour(int n) {
        // if(n==1){
        //     return true;
        // }
        // if(n > 1){
        //     if(n % 4 == 0){
        //     return true;
        // }
        // return false;
        // }
        // return false;
        if(n <= 0){
            return false;
        }
        while(n % 4 == 0){
            n /= 4;
        }
        return n == 1;
        
        
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if(pow(2,n){
        //     return true;
        // }
        // return false;
        if(n <= 0){
            return false;
        }
        return (n & (n-1)) == 0;
    }
};

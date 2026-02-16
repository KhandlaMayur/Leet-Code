class Solution {
public:
    int reverseBits(int n) {
        // string binary = " ";
        // while(n > 0){
        //     binary += (n % 2) + '0';
        //     n = n/2;
        // }
        // reverse(binary.begin(),binary.end());
        // int decimal = 0 ,base = 0;
        // int lastdigit;
        // while(binary > 0){
        //     lastdigit  = binary % 10;
        //     decimal += lastdigit * base ;
        //     base *= 2;
        //     binary /= 10 ;
        // }
        // return binary;

        unsigned int num = n;
        unsigned int result = 0;

        for(int i = 0 ; i < 32 ; i++){
            result <<= 1;
            result |= (num & 1);
            num >>=1;
        }
        return result;
        
    }
};

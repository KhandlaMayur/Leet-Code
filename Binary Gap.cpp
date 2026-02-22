class Solution {
public:
    int binaryGap(int n) {
        // int binary[32];
        // int i = 0;
        // while(n > 0){
        //     binary[i] = n % 2;
        //     n = n / 2;
        //     i++;

        // }
        // // int temp;
        // for(int j = 0; j < i ; j++){
        //     // temp = binary[j];
        //     if(binary[j] )
        // }
        int last = -1;
        int pos = 0;
        int maxGap = 0;

        while (n > 0) {
            if (n & 1) {  // if current bit is 1
                if (last != -1) {
                    maxGap = max(maxGap, pos - last);
                }
                last = pos;
            }
            n >>= 1;
            pos++;
        }

        return maxGap;

    }
};

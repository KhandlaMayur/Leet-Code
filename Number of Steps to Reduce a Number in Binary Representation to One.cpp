class Solution {
public:
    int numSteps(string s) {

        // approach - 1

        // long long decimal = 0, base = 1;
        // int count = 0;
        // int rem;
        // int num = stoi(s);
        // while(num > 0){
        //     rem = num % 10;
        //     decimal += rem * base;
        //     base *= 2;
        //     num /= 10;
        // }
        // while(decimal != 1){
        // if(decimal % 2 ==0){
        //     count++;
        //     decimal /= 2;
        // }else{
        //     count++;
        //     decimal += 1;
        // }
        // }
        // return count;

        // approach - 2
        
        // this code not suitable for all test case 
        // long long decimal = 0;
        // long long base = 1;
        // int count = 0;

        // for (int i = s.length() - 1; i >= 0; i--) {
        //     rem = s[i] - '0';  //
        //     decimal += rem * base;
        //     base *= 2;
        // in this case my base is overflow 
        // }

        // approach - 3

        // for (int i = 0; i < s.length(); i++) {
        //     int rem = s[i] - '0';
        //     decimal = decimal * 2 + rem;

        // in this case same my decimal is overflow
        // }

        // while(decimal != 1){
        //     if(decimal % 2 ==0){ 
        //           count++;
        //     decimal /= 2;
        // }else{
        //       count++;
        //     decimal += 1;
        // }
      

        // }
        // return count;



        int step = 0;
        while(s != "1"){
            if(s.back() == '0'){
                s.pop_back();     // divide by 2
            }else{
                int i = s.length()-1;
                while( i >= 0 && s[i] == '1'){
                    s[i] = '0';
                    i--;
                }
                if(i >= 0){
                    s[i] = '1';
                }else{
                    s = '1' + s ;
                }
            }
            step++;
        }
        return  step;
    }
};

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();

        // My First Approach 
        // if(n < 3){
        //     return 0;
        // }
        // int count = 0;
        // if(n == 3){
        //     if(n % 2 != 0){
        //         return 0;
        //     }
        // }
        // for(int i = 0; i < n; i++){
        //     int j = i+1;
        //     int k = j+1;
        //     if(k % 2 != 0){
        //         count++;
        //     }
        // }
        // return count;

        // Brust Approach
        // unordered_set<int> uniqueNumbers;
        // // int count = 0;
        // for(int i = 0; i < n; i++){
        //     if(digits[i] == 0){
        //         continue;
        //     }
        //     for(int j = 0; j < n; j++){
        //         if(j == i){
        //             continue;
        //         }
                
        //         for(int k = 0; k < n; k++){
        //             if(k == i || k == j){
        //                 continue;
        //             }
        //             if(digits[k] % 2 == 0){
        //             int num = digits[i]*100 + digits[j]*10 + digits[k];
        //             uniqueNumbers.insert(num);
        //             }
        //         }
        //     }
        // }
        // return uniqueNumbers.size();


        // Optimal Solution
        vector<int> freq(10,0);
        for(int d : digits){
            freq[d]++;
        }

        int count = 0;
        for(int num = 100; num <= 999; num++){
            if(num % 2 != 0){
                continue;
            }
            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;

            vector<int> temp = freq;
            if(temp[a] > 0) {
                temp[a]--;
            }else{
                continue;
            }

            if(temp[b] > 0){
                temp[b]--;
            }else{
                continue;
            }

            if(temp[c] > 0){
                temp[c]--;
            }else{
                continue;
            }

            count++;
        }
        return count;
    }
};

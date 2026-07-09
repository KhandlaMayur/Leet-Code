class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += chalk[i];
            if(sum  >  k){
                break;
            }
        }

        int rem = k % sum;

        for(int i = 0; i < n; i++){
            if(rem < chalk[i]){
                return i;
            }
            rem -= chalk[i];
        }
        return -1;
        // int i = 0;
        // while(rem > n){
        //     if(rem > chalk[i]){
        //         rem -= chalk[i];
        //     }else{
        //         return i;
        //     }
        //     i++;
        // }
        // return i;

    }
};

class Solution {
public:
    bool isprime(int n){
        if(n < 2 ) return false;
        for(int i = 2 ; i*i <= n ;i++){
            if(n % i == 0) return false;
        }
            return true;
    }

    int countPrimeSetBits(int left, int right) {
        int count= 0;
        for(int num = left; num<=right ; num++){
            int temp = num ;
            int setbit = 0;
            while(temp > 0){
                setbit += temp % 2;
                temp /= 2;
            }
            if(isprime(setbit)){
                count ++;
            }
        }
        return count;

    }
};

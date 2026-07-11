class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int multiplication = 1;
        // int k = 0;
        int n = nums.size();
        int zero = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                zero++;
            }else{
            multiplication *= nums[i]; 
            }
        }

        if(zero > 1){
            for(int i = 0; i < n; i++){
                nums[i] = 0;
            }
            return nums;
        }

        for(int i = 0; i < n; i++){
            if(zero == 1){
                if(nums[i] == 0){
                    nums[i] = multiplication;
                }
                else{
                    nums[i] = 0;
                }
            }
            else{
                nums[i] = (multiplication) / nums[i];
            }
        }
        return nums;   
    }
};

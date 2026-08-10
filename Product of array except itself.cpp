class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        //brute force approach
        // int n = nums.size();
        // vector<int> ans(n, 1);
        // for(int i = 0; i < n; i++){
        //     // int product = 1;
        //     for(int j = 0; j < n; j++){
        //         if(i != j){
        //             // product *= nums[j];
        //             ans[i] *= nums[j];
            
        //         }
        //     }
        //     // ans[i] = product;
        // }
        // return ans;

        //optimal approach with no optimize the space
        // int n = nums.size();
        // vector<int> prefix(n, 1);
        // vector<int> suffix(n, 1);
        // vector<int> ans(n ,1);

        // //prefix
        // for(int i = 0; i < n; i++){
        //     prefix[i] = prefix[i-1] * nums[i-1];
        // }

        // //suffix
        // for(int i = n - 2; i >= 0; i--){
        //     suffix[i]= suffix[i+1] * nums[i+1];
        // }

        // for(int i = 0; i < n; i++){
        //     ans[i] = prefix[i] * suffix[i];
        // }
        // return ans;

        //optimal with optimal the space
        int n = nums.size();
        vector<int> ans(n ,1);

        //prefix
        for(int i = 1; i < n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        //suffix
        int suffix = 1;
        for(int i = n - 2; i >= 0; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
        return ans;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        //better approach
        // sort(nums.begin(), nums.end());

        // int freq = 1;
        // int ans = nums[0];
        // for(int i = 1; i < n; i++){
        //     if(nums[i] == nums[i-1]){
        //         freq++;
        //     }else{
        //         freq = 1;
        //         ans = nums[i];
        //     }
        //     if(freq > (n/2)){
        //         return ans;
        //     }

        // }
        // return ans ;


        //optimal approach
        int freq = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
        }
        return ans;
    }
};

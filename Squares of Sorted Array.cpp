class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        //brute force approach 
        // int n = nums.size();
        // int idx = 0;
        // for(int i = 0; i < n; i++){
        //     nums[idx++] = nums[i] * nums[i];
        // }
        // sort(nums.begin(), nums.end());
        // return nums;

        //optimal approach
        int n = nums.size();
        vector<int> ans(n);
        int low = 0;
        int high = n - 1;
        int idx = n - 1;

        while(low <= high){
            int left = nums[low] * nums[low];
            int right = nums[high] * nums[high];
            if(left > right){
                ans[idx] = left;
                low++;
            }else{
                ans[idx] = right;
                high--;
            }
            idx--;
        }
        return ans;
    }
};

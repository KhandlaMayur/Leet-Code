class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, k = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            nums[k] = sum;
            k++;
        }
        return nums;
        
    }
};

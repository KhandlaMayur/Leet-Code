class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int result;
        sort(nums.begin(),nums.end(), greater<int>());
        for(int i = 0; i < k; i++){
             result =  nums[i];
        }
        return result;
    }
};

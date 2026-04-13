class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        // int n =nums.size();
        // for(int i=start;i<n;i++){
        //     if(nums[i] == target){
        //         return abs(i-start);
        //     }
        // }
        // return 0;
        int n =nums.size();
        int minimum = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(nums[i] == target) {
                minimum = min(minimum, abs(i - start));
            }
        }
        return minimum;
    }
};

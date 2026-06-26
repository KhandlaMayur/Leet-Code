class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        // bool isrotated(nums) = false;
        // reverse(nums.begin(),nums.end());
        // reverse(nums.begin(),nums.)
        int count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > nums[(i+1)%n]){
                count++;
            }
        }
        return (count <= 1) ? true : false;
    }
};

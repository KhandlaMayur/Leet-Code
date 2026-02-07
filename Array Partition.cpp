class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // n=nums.size();
        // // for(int i=0; i < n; i += 2){
        // //     pair<int,int> p = {nums[i],nums[i+1]};
        // // }
        // for(int i = 0; i < n; i++){
        //     for(int j = i+1; j < n ; j++){
        //         pair <int,int> p = {nums[i], nums[j]};
        //         sum = 
        //     }
        // }
        sort(nums.begin(), nums.end());
        int sum = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; i += 2){
            sum += nums[i];
        }

        return sum;
        
    }
};

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int sum1,sum2,sum3;
        if(n<3){
            return -1;
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k= j+1; k<n;k++){
                    if(nums[i]==nums[j] && nums[j]==nums[k]){
                        int dist = abs(i - j) + abs(j - k) + abs(k - i);
                        ans = min(dist,ans);
                    }
                }
            }
        }
        return (ans==INT_MAX) ? -1 : ans;
        // for(int i=0;i<n;i++){
        //     int j = i+1;
        //     int k = j+1;
        //     if(nums[i] != nums[j] ){
        //          sum1=abs(nums[i] - nums[j]);
        //         j++;
        //     }
        //     if(nums[j] != nums[k]){
        //          sum2=abs(nums[j] - nums[k]);
        //          sum3=abs(nums[k]- nums[i]);
        //         k++;
        //     } 
        //     int total = sum1+sum2+sum3;
        //     return total;
        // }
        // return -1;
    }
};

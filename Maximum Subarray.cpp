class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        //brute apporach
        // int n=nums.size();
        // int maxsum=INT_MIN;
        // for(int i=0;i<n;i++){
        //     int currsum=0;
        //     for(int j=i;j<n;j++){
        //         currsum += nums[j];
        //         maxsum=max(currsum,maxsum);
        //     }
        // }
        // return maxsum;

        // optimize approach
        int n=nums.size();
        int currsum=0,maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            currsum += nums[i];
            maxsum=max(currsum,maxsum);
            if(currsum < 0){
                currsum = 0;
            }
        }
        return maxsum;
    }
};

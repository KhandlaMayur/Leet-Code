class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> arr;

        for(int i = 0; i < n; i++){
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());
        int s = 0;
        int e = n-1;

        while(s < e){
            int sum = arr[s].first + arr[e].first;

            if(sum == target){
                return {arr[s].second, arr[e].second};
            }else if(sum < target){
                s++;
            }else{
                e--;
            }
        }
        return {};
        // return (istarget) ? {s,e};

        //brute force
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return{};
        
    }
};

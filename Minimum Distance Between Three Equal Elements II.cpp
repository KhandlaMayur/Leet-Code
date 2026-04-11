class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        //Brust Approach

        // int n = nums.size();
        // if(n < 3){
        //     return -1;
        // }
        // int ans = INT_MAX;
        // for(int i = 0; i < n; i++ ){
        //     for(int j = i+1; j < n; j++){
        //         for(int k = j+1; k < n; k++){
        //             if(nums[i] == nums[j] && nums[j] == nums[k]){
        //                 int result = abs(i - j) + abs(j - k) + abs(k - i);
        //                 ans = min(ans, result);
        //             }
        //         }
        //     }
        // }
        // return (ans == INT_MAX) ? -1 : ans;

        //Optimal code
        unordered_map<int, vector<int>> m;

        for(int i = 0; i < nums.size();i++){
            m[nums[i]].push_back(i);
        }

        int ans = INT_MAX;
        for(auto &it : m){
            vector<int> &v = it.second;

            if(v.size() >= 3){
                for(int i = 0; i + 2 < v.size();i++){
                    int dist = 2 * (v[i+2] - v[i]);
                    ans = min(ans, dist);
                }
            }
        }
        return (ans == INT_MAX) ? -1 : ans; 
        
    }
};

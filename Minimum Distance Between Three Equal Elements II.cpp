class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        //Brut Approach

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
        int result = INT_MAX;

        for(int k = 0; k < nums.size();k++){
            m[nums[k]].push_back(k);
             
            if(m[nums[k]].size() >= 3){
                // i, j, k
                // 2(k-i)
                vector<int> &vec = m[nums[k]];
                int siz = vec.size();

                int i = vec[siz - 3];
                result = min(result, 2*(k-i));
            }
        }
        return result == INT_MAX ? -1 : result;

    }
};

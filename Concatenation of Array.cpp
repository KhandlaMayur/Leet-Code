class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        // brute force
        // vector<int> v;
        // for(int i = 0; i < n; i++){
        //     v.push_back(nums[i]);
        // }
        // for(int i = 0; i < n; i++){
        //     v.push_back(nums[i]);
        // }
        // return v;

        vector<int> v(2 * n);
        for(int i = 0; i < n; i++){
            v[i] = nums[i];
            v[i+n] = nums[i];
        }
        return v;

        // vector<int> v = nums;
        // v.insert(v.end(), nums.begin(), nums.end());
        // return v;
        
    }
};

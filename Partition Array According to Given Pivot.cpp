class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small, big, equal;
        
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] < pivot) {
                small.push_back(nums[i]);
            } else if(nums[i] == pivot) {
                equal.push_back(nums[i]);
            }
            else {
                big.push_back(nums[i]);

            }
        }

        vector<int> ans; 
        for(int i : small){
            ans.push_back(i);
        }
        for(int i : equal){
            ans.push_back(i);
        }
        for(int i : big){
            ans.push_back(i);
        }
        return ans;
    }
};

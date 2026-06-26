class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
       
        //left roation
        //  int temp[k];
        // for(int i = 0; i < k; i++){
        //     temp[i] = nums[i];
        // }        
        // for(int i = k; i < n; i++){
        //     nums[i-k] = nums[i];
        // }
        // for(int i = n - k; i < n; i++){
        //     nums[i] = temp[i-(n-k)];
        // }

        // right rotation
        vector<int> temp(k);
        // Store last k elements
        for(int i = 0; i < k; i++){
            temp[i] = nums[n-k+i];
        }
         // Shift remaining elements to the right
        for(int i = n-k-1; i >= 0; i--){
            nums[i+k] = nums[i];
        }
        // Copy stored elements to front
        for(int i = 0; i < k; i++){
            nums[i] = temp[i];
        }
    }
};

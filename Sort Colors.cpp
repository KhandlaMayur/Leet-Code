class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());

        int n = nums.size();
        // int a = 0, b = 0, c = 0;
        // for(int i = 0; i < n; i++){
        //     if(nums[i] == 0) a++;
        //     else if(nums[i] == 1) b++;
        //     else c++;
        // }

        // int inx = 0;
        // for(int i = 0; i < a; i++){
        //     nums[inx++] = 0;
        // }

        // for(int i = 0; i < b; i++){
        //     nums[inx++] = 1;
        // }

        // for(int i = 0; i < c; i++){
        //     nums[inx++] = 2;
        // }

        // optimal approach 
        int mid = 0, high = n - 1, low = 0;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};

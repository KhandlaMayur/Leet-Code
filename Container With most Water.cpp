class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        //brute force approach
        // int max_water = 0;
        // for(int i = 0; i < n; i++){
        //     for(int j = i + 1; j < n; j++){
        //         int width = j - i;
        //         int heights = min(height[i], height[j]);
        //         max_water = max((width * heights), max_water);
        //     }
        // }
        // return max_water;

        //optimal approach
        int max_water = 0;
        int low = 0;
        int high = n - 1;
        while(low < high){
            int width = high - low;
            int heights = min(height[low], height[high]);
            max_water = max((width * heights), max_water);
            (height[low] < height[high]) ? low++ : high--;
        }
        return max_water;
    }
};

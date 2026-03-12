class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Bitwise Operator

        int result = 0;

        for(int num : nums){ // n 
            result = result ^ num;  // 1
        }
        return result; // 1

        // Traversal  
        // int n = nums.size();
        // for(int i = 0; i < n; i++){  // n*n*1 + 1 + 1
        //     int count = 0;
        //     for(int j = 0; j < n; j++){  // n * 1 * 1
        //         if(nums[i] == nums[j]){  // 1 
        //             count++;             //1
        //         }
        //     }
        //     if(count==1){        // 1
        //         return nums[i]; // 1
        //     }
        // }
        // return -1; // 1


        // Map 
        // map<int,int> freq;
        // for(int num : nums){ // n*1 + n*1*1 + 1
        //     freq[num]++;    // 1 
        // }

        // for(auto it : freq){   // n * 1 *1
        //     if(it.second == 1){  // 1
        //         return it.first;  // 1
        //     }
        // }

        // return -1;    
    }
};

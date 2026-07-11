class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        if(n < 2){
            return {-1};
        }
        int maxi = -1;
        for(int i = n - 1 ; i >=0; i--){
            int temp = arr[i];
            arr[i] = maxi;
            maxi = max(maxi, temp);
        }
        return arr;
        // int k = 0;
        // for(int i = 0; i < n; i++){
        //     arr[n-1] = -1;
        //     if(arr[i] < arr[i+1]){
        //         arr[k] = arr[i+1];
        //         k++;  
        //     }else if(arr[i] > arr[i+1]){
        //         arr[k] = arr[i+1] + 1;
        //         k++;
        //     }else{
        //         arr[k] = arr[i+1];
        //     }
        // }
        // return arr;
        
    }
};

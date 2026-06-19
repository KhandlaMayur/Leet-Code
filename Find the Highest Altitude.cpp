class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        //brut forse
        // int n = gain.size();
        // int sum = 0;
        // vector<int> arr;
        // for(int i = 0; i < n; i++){
        //     sum += gain[i];
        //     arr.push_back(sum);
        // }
        // int maxi = arr[0];
        // for(int i = 0; i < arr.size(); i++){
        //     if(arr[i] > maxi){
        //         maxi = arr[i];
        //     }
        // }
        // if(maxi > 0 ){
        //     return maxi;
        // }
        // return 0;

        //optimal 
        int sum=0;
        int maxi=0;
        for(int i : gain)  {
            sum+=i;
            maxi = max(maxi, sum);
        }
        // return max(0, maxi);
        return maxi;
    }
};

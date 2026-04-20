class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n =colors.size();
        // int maxi = n-1;
        // int mini = colors[0];
        // for(int i=0; i < n; i++){
        //     if(colors[0] != maxi){
        //         return maxi;
        //     }
        //     else if(colors[i] == maxi){
        //         maxi = colors[i];
        //         maxi --;
        //     }
        //     else if(mini == colors[n-1]){
        //         mini = colors[i];
        //         mini++;
        //     }
        //     else{
        //         return mini;
        //     }
        // }
        // return max(maxi,mini);
            int mini = 0;
            int maxi = n-1;
            while(colors[0] == colors[maxi]){
                maxi--;
            }
            int dist1 = maxi;

            while(colors[n-1] == colors[mini]){
                mini++;
            }
            int dist2 = (n - 1) - mini;

            return max(dist1,dist2);
    }
};

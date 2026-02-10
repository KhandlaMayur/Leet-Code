class Solution {
public: 
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
        vector<int> remaining;
        int n=arr1.size();
        int m=arr2.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr2[i]==arr1[j]){
                    result.push_back(arr1[j]);
                }
            }
        }
        for(int j=0;j<n;j++){
            bool found = false;
            for(int i=0;i<m;i++){
                if(arr1[j] == arr2[i]){
                    found =true;
                    break;
                }
            }
            if(!found){
                remaining.push_back(arr1[j]);
            }
        }
        sort(remaining.begin(), remaining.end());
        for(int i=0;i<remaining.size();i++){
            result.push_back(remaining[i]);
        }
        return result;
        
    }
};

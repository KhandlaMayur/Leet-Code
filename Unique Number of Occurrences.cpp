class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int i : arr){
            freq[i]++;
        }
        set<int> st;
        for(auto it : freq){
            st.insert(it.second);
        }
        return st.size() == freq.size();;
        
    }
};

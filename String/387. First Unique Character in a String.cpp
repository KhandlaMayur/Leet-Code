class Solution {
public:
    int firstUniqChar(string s) {

        //my approach
        // char first = s[0];
        // int count = 0;
        // for(int i = 0; i < s.length(); i++){
        //     if(first == s[i] && s[i] != s[i+1]){
        //         count++;
        //         // cout << count << "\n";
        //     }
        // }
        // if(count == 1){
        //     return 0;
        // }else if(count > 1){
        //     return count;
        // }else{

        // return -1;
        // }

        //brute force 
        // unordered_map<char, int> mp;
        // for(int x : s){
        //     mp[x]++;
        // }
        // for(int i = 0; i < s.length(); i++){
        //     if(mp[s[i]] == 1){
        //         return i;
        //     }
        // }
        // return -1;

        //optimal approach
        int freq[26] = {0};
        for(int ch : s){
            freq[ch - 'a']++;
        }
        for(int i = 0; i < s.length(); i++){
            if(freq[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};

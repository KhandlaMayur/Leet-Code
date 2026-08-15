class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        unordered_map<char, int> mp1;

        if(s.length() != t.length()){
            return false;
        }
        for(char x : s){
            mp[x]++;
        }
        for(char y : t){
            mp1[y]++;
        }
        // for(auto it : mp){
        //     if((it.second) % 2 != 0){
        //         return false;
        //     }
        // }
        if(mp == mp1){
            return true;
        }
        return false;
    }
};

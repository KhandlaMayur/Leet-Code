class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // int result = 0;
        // for(char c : s){
        //     result ^= c;
        // }
        // if(result==0){
        //     return true;
        // }
        // return false;
        string t = s+s;
        return t.substr(1, t.size()-2).find(s) != string :: npos;
        // if (t.find(s) != string::npos){
        //     return true;
        // }      
        // return false;
        
    }
};

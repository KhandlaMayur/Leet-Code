class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        if(s.length() == 1){
            return true;
        }
        for(char x : s){
            if(isalnum(x)){
                result += tolower(x);
            }
        }
        int n = result.length();
        int low = 0;
        int high = n - 1;
        while(low <= high){
            if(result[low] == result[high]){
                low++;
                high--;
            }else{
                return false;
            }
        }
        return true;
    }
};

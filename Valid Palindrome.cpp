class Solution {
public:
    bool isPalindrome(string s) {

        string clean = "";
        for(char c : s){
            if(isalnum(c)){
                clean += tolower(c);
            }
        }
        int start = 0;
        int end = clean.length() - 1;
        bool palindrome = true;

        while(start < end){
            if(clean[start] != clean[end]){
                palindrome = false;
                break;
            }
            start++;
            end--;
        }     
        if(palindrome){
            return true;
        } 
        return false;
        // string rev = " ";
        // for(int i=s.length(); i>0;i--){
        //     rev +=s[i];
        // }
        // if(s==rev) {
        //     return true;

        // }  return false;
        
    }
};

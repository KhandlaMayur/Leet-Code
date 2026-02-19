class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.length();
        int ans = 0;
        int curr = 1;
        int previous = 0;
        for(int i = 1 ; i < n ; i++){
            if(s[i] == s[i-1]){
                curr++;
            }else{
                ans += min(previous,curr);
                previous = curr;
                curr=1;
            }
        }
        ans += min(previous,curr);
        return ans;

        // for(int i=0;i<n-1;i++){
        //     if(s[i] ==s[i+1] && s[i+2]==s[i+3] || (s[i]=='0' && s[i+1]=='1') ||(s[i]=='1' && s[i+1]=='0')){
        //         count++;
        //     }
        // }
        // return count;

        
    }
};

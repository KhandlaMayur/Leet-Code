class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.length();
        int low = 0;
        int high = n - 1;
        // mylogic 
        // int skip = 0;
        // while(low < high){
        //     if(s[low] == s[high]){
        //         // return true;
        //         low++;
        //         high--;
        //     }
        //     else{
        //         if(s[low] == s[high - 1]){
        //             // return true;
        //             low++;
        //             high -= 2;
        //             skip++;
        //         }else if(s[low + 1] == s[high]){
        //             // return true;
        //             low += 2;
        //             high--;
        //             skip++;
        //         }else{
        //             return false;
        //         }
        //     }
        // }
        // return false;
        // return (skip <= 1) ? true : false;

        //currect the approach
        while(low < high){
            if(s[low] == s[high]){
                // return true;
                low++;
                high--;
            }
            else{
                int l1 = low;
                int h1 = high - 1;
                bool first = true;
                while(l1 < h1){
                    if(s[l1] != s[h1]){
                        first = false;
                        break;
                    }
                    l1++;
                    h1--;
                }

                if(first){
                    return true;
                }
                int l2 = low + 1;
                int h2 = high;
                bool second = true;
                while(l2 < h2){
                    if(s[l2] != s[h2]){
                        second = false;
                    }
                    l2++;
                    h2--;
                }
                if(second){
                    return true;
                }
                return false;
            }
        }
        return true;
    }
};

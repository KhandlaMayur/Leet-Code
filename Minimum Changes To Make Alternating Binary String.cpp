class Solution {
public:
    int minOperations(string s) {
        // int count = 0;
        // for(int i = 0; i<s.length(); i++){
        //     if((s[i] == '0' && s[i+1]=='0') || (s[i] == '1' && s[i+1]=='1')){
        //         s[i] = '1';
        //         s[i+1] = '0';
        //         count++;
        //     }
        // }
        // return count;

        // not right for all case 

        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i<s.length(); i++){
            if(s[i] != (i % 2 ? '1' : '0')){
                count1++;
            }
             if(s[i] != (i % 2 ? '0' : '1')){
                count2++;
            }

        }
        return min(count1, count2);
        
    }
};

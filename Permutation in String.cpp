class Solution {
public:

    bool isFreqSame(int freq1[], int freq2[]){
        for(int i = 0; i < 26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true; 
    }
    bool checkInclusion(string s1, string s2) {
        // string s = s1 + s1;
        // if(s.find(s2) && string :: npos ){
        //     return true;
        // }
        // return false;

        int freq[26] = {0};
        for(int i = 0; i < s1.length(); i++){
            int index = s1[i] - 'a';
            freq[index]++;
        }

        int windSize = s1.length();

        for(int i = 0; i < s2.length(); i++){
            int windInx = 0, idx = i;
            int windFreq[26] = {0};

            while(windInx < windSize && idx < s2.length()){
                int index2 = s2[idx] - 'a';
                windFreq[index2]++;
                windInx++;
                idx++;

            }
            if(isFreqSame(freq, windFreq)){
                return true;
            }
        }
        return false;
        
    }
};

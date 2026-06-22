class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0,a=0,l=0,o=0,n=0;
        // int count = 0;
        for(int i = 0; i < text.length(); i++){
            if(text[i] == 'b'){
                b++;
            }else if(text[i] == 'a'){
                a++;
            }else if(text[i] == 'l'){
                l++;
            }else if(text[i] == 'o'){
                o++;
            }else if(text[i] == 'n'){
                n++;
            }
        }
        // if(b % 2 == 1 && a % 2 == 1 && n % 2 == 1 && l % 2 == 0 && o % 2 == 0){
        //     count++;
        // }
        int count =  min ({b,a,l/2,o/2,n});
        return count;
    }
};

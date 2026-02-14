class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // int n = rec1.size();
        // int m = rec2.size();
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = 0 ; j < m ; j++){
        //         if(rec1[i] ==rec2[j] +1){
        //             return true;
        //         }
        //         return false;
        //     }
        // }    
        // return 0;   
        if (rec1[2] <= rec2[0] ||  // left
            rec1[0] >= rec2[2] ||  // right
            rec1[3] <= rec2[1] ||  // below
            rec1[1] >= rec2[3]) {  // above
            
            return false;
        }
        
        return true; 
        
    }
};

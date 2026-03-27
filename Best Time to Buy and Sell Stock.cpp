class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int start = 0,end =prices.size()-1,profit=0;
        // while(start < end){
        //      profit = end - start;
        // }
        // return profit;

        //brute force approach
        // int maxprofit=0;
        // int n=prices.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int profit =(prices[j]-prices[i]);
        //         maxprofit=max(profit,maxprofit);
        //     }
        // }
        // return maxprofit;

        //optimal approach
        int minprice=INT_MAX;
        int maxprofit=0;
        for(int price : prices){
            if(price < minprice){
                minprice = price; //buy here
            }else{
                int profit = price - minprice;
                maxprofit = max(profit,maxprofit);
            }
        }
        return maxprofit;
        
    }
};

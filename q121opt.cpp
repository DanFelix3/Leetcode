//optimised version of the Q:121
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit=0;
        int minprice=prices[0];
        int maxp;
        for(int i=0;i<n;i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            maxp=prices[i]-minprice;
            if(maxp > maxprofit){
                maxprofit = maxp;
            }
        }
        return maxprofit;
    }
};

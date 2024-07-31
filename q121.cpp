//Q121: Best time to buy and sell stocks in a week.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit=0;
        int minprice=prices[0];
        int maxp;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            m[prices[i]]=minprice;
        }
        for(int i=0;i<n;i++)
        {
            maxp=prices[i]-m[prices[i]];
            if(maxp > maxprofit){
                maxprofit = maxp;
            }
        }
        return maxprofit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) { // 3 5 6 2 1
        int buy=INT_MAX;
        int finalProfit=0;
        int temp;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            temp=prices[i]-buy;
            if(temp>finalProfit){
                finalProfit=temp;
            }
        }
        return finalProfit;
    }
};

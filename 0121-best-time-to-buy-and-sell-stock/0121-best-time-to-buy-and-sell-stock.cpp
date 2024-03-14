class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int buying = prices[0];
        for(int j = 1; j < prices.size(); j++){
            if(prices[j] < buying){
                buying = prices[j];
            }
            else if((prices[j] - buying) > max){
                max = prices[j] - buying;
            }
        }
        if(max < 0){
            return 0;
        }
        return max;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> dp(prices.size());
        dp[0]=prices[0];
        int maxi=0;
        for(int i=1;i<prices.size();i++){
            maxi=max(maxi,prices[i]-dp[i-1]);
            dp[i]=min(prices[i],dp[i-1]);
            cout<<dp[i]<< " ";
        }
        
        return maxi;
    }
};
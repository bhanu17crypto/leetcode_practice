class Solution {
public:
    int miniCost(int ind , vector<int>&cost,vector<int>&dp)
    {
        if(ind == 0 || ind == 1) return dp[ind] = cost[ind];
        if(dp[ind] != -1) return dp[ind];
        return dp[ind] = min(miniCost(ind-1,cost,dp),miniCost(ind-2,cost,dp)) + cost[ind];
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,-1);
        int ans = min(miniCost(n-2,cost,dp),miniCost(n-1,cost,dp));
        return ans;
    }
};
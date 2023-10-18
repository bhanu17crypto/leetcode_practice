class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int  p = __gcd(nums[0],nums[n-1]);
        return p;
        
    }
};
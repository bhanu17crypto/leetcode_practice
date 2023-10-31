class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        for(auto i : mp)
        {
            if(i.second>n/3)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};
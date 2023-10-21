class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto i : nums)
        {
            pq.push(i);
        }
        int a = pq.top();
        pq.pop();
        return (a-1)*(pq.top()-1);
    }
};
class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int id, int vd) {
        int n = nums.size();
        int j=id;
        int maxe=INT_MIN,mini=INT_MAX,maxind,minind;
        for(int i=0;i<n && j<n;i++){
            if(maxe<nums[i]){
                maxe = nums[i];
                maxind = i;
            }
            if(mini>nums[i]){
                mini = nums[i];
                minind = i;
            }
      
            if(abs(maxe-nums[j])>=vd){
                return {maxind,j};
            }
            if(abs(mini-nums[j])>=vd){
                return {minind,j};
            }
            j++;
        }
        return {-1,-1};
        
    }
};



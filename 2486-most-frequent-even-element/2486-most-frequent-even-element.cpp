class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
     for(auto i : nums)
     {
         mp[i]++;

     }
     int n =nums.size();
     int count =0;
     int  p=-1;
    //  sort(nums.begin(),nums.end());
     for(int i =0;i<n;i++)
     {
         if(nums[i]%2==0)
         {
          if(mp[nums[i]]>count)
            {
                count = mp[nums[i]];
                p = nums[i];
            }
            else if(mp[nums[i]]==count && nums[i]<p)
            {
                p = nums[i];
            }
         }
         

     }
     return p;
    }
};
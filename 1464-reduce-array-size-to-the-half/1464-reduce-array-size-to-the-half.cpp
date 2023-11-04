class Solution {
public:
    int minSetSize(vector<int>& nums) {
         int n = nums.size();
        int p = ceil(n/2);
        unordered_map<int,int> mp;
        for(auto  a : nums)
        {
            mp[a]++;
        }
        vector<int>ans;
        for(auto i : mp)
        {
             ans.push_back(i.second);
        }
        sort(ans.rbegin(),ans.rend());
        int count =0;
        for(int i=0;i<ans.size();i++)
        {
            count = ans[i] + count;
            if(count>=n/2)
            {
               return  i+1;
            }
        }
        return -1;
        






//         vector<pair<int,int>> vp;
//         for(auto it : mp)
//         {
//             vp.push_back({it.second , it.first});
//         }
//         sort(vp.begin(),vp.end());
//         // reverse(vp.begin(),vp.end());
//         vector<int> ans;
//         int count =1;
// //         for(auto it : vp)
// //         {
// //             int x  = it.first;
//         int x=0;
//             int m=vp.size();
//     for(int i =m-1;i>=0;i--)
//     {
//         x+=vp[i].first;
//         if(x<p)

//         {
//             count++;
            
//         }
             
//     }
          
        
//         return count;
        
    }
};
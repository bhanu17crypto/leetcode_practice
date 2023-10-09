class Solution {
public:
    vector<int> searchRange(vector<int>& v, int x) {
        vector<int> ans;
        int n = v.size();
        unordered_map<int,int> first , second,count;
        for(int i = 0;i<n;i++)
        {
            if(first.count(v[i])==0)
            {
            first[v[i]] = i;
            }
            second[v[i]] = i;
            count[v[i]]++;
        }
        for(auto p : second)
        {
            if(p.first==x)
            {
                ans.push_back(first[p.first]);
                ans.push_back(second[p.first]);
            }
        }
        if(ans.size()==0)
        {
          
                ans.push_back(-1);
                ans.push_back(-1);  
        }

      return ans;
        
    }
};
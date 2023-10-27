class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int index =0 , count =0;
        int maxi =0;
        vector<int>ans;
        // for(int i =0;i<n;i++)
        // {
        //     int count=0;
        //     for(int a : mat[i])
        //     {
        //         if(a==1)
        //         {
        //             count++;
        //         }
        //     }
        //     if(count>p){
        //         index = i;
        //         p=count;
        //         ans[1] = p;
        //         ans[0] = index;
        //     }
        // }
        for(int i =0;i<n;i++)
         {
              
             count = 0;
             for(int j =0;j<m;j++)
             {
                
                 if(mat[i][j]==1)
                 {
                     count++;
                 }
                 if(count>maxi)
                 {
                 maxi = max(maxi,count);
                 index = i;
                 }
             }
            

             }
             ans.push_back(index);
             ans.push_back(maxi);
        return ans;
        
    }
};
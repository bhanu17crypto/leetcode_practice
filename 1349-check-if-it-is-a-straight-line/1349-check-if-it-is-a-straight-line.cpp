class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int n = c.size();
        // int x = (c[1][1] - c[0][1])/(c[1][0] - c[0][0]);
        // if()
        // if(n==2)
        // {
        //     return  true;
        // }
        // for(int i =1;i<n-1;i++)
        // {
            
        //         if(x!=(c[i+1][1] - c[i][1])/(c[i+1][0] - c[i][0]))
        //         {
        //             return false;
        //         }
            

        // }
        // int x,y;
        // (c[1][0] - c[0][0])(y-c[0][1]) = (c[1][1] - c[0][1])(x-c[0][0]);
        for(int i =0;i<n-1;i++)
        {
            if((c[1][0] - c[0][0])*(c[i][1]-c[0][1]) -(c[1][1] - c[0][1])*(c[i][0]-c[0][0]) != (c[1][0] - c[0][0])*(c[i+1][1]-c[0][1]) -(c[1][1] - c[0][1])*(c[i+1][0]-c[0][0]))
        {
            return false;
        }

        }

        return true;
        
    }
};
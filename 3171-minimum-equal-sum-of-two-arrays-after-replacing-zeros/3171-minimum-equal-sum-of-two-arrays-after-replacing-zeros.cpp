class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int c1=0,c2=0,i,j;
        long long int sum1=0,sum2=0;
        for(int i=0;i<nums1.size();i++)
        {
            sum1+=nums1[i];
            if(nums1[i]==0)
                c1++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            sum2+=nums2[i];
            if(nums2[i]==0)
                c2++;
        }
        
                if(c1==0 && c2==0)
                {
                    if(sum1==sum2)
                        return sum1;
                    else
                        return -1;
                }
                if(c1==0 || c2==0)
                {
                    if(sum1==sum2)
                        return -1;
                    else
                    {
                        if(c2==0)
                        {
                            if(c1+sum1>sum2)
                                return -1;
                        }
                        else if(c1==0)
                        {
                            if(c2+sum2>sum1)
                                return -1;
                        }
                    }
                        
                }
         return max(sum1+c1,sum2+c2);      
    }
};
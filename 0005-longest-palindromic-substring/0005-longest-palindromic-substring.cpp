class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int pos=0;
        int len=1;
        int high;
        int low;
        for(int i=1;i<n;i++){
            // for even
            low=i;
            high=i-1;
            while(low>=0 && high<n && s[low]==s[high]){
               if(len<high-low+1){
                   pos=low;
                   len=high-low+1;
               }
               low--,high++;
            }

            // for odd
            low=i-1;
            high=i+1;
            while(low>=0 && high<n && s[low]==s[high]){
                if(len<high-low+1){
                    pos=low;
                    len=high-low+1;
                    
                }
                low--,high++;
            }
        }
        return s.substr(pos,len);

    }
};
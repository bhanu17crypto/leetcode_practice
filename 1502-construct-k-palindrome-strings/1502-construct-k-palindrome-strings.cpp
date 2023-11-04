class Solution {
public:
    bool canConstruct(string s, int k) {

        int a[26];  
        memset(a,0,sizeof(a));
        int n=s.length();
        if(k>n)return 0;
        for(int i=0;i<n;i++)
        {
            a[s[i]-'a']++;
        }
        int res=0;
        for(int i=0;i<26;i++)
        {
            if(a[i]%2)res++;
        }
        return res<=k;
    }
};
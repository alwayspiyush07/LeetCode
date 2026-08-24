class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>f;
        int high = 0;
        int low = 0;
        int n = s.size();
        int res = INT_MIN;
        for(high=0;high<n;high++){
            f[s[high]]++;
            int k=high-low+1;
            while(f.size()<k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                }
                low++;
                k=high-low+1;
            }
            k=high-low+1;
            res=max(k,res);
        }
        if (res==INT_MIN){
            return 0;
        }
        else{
            return res;
        }
    }
};
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        int max = 0;
        int ans = 0;
        for(auto&[nums,cnt]:freq){
            if(cnt>max){
                max=cnt;
                ans=cnt;
            }
            else if(cnt == max){
                ans = ans+cnt;
            }
        }
        return ans;
        
    }
};
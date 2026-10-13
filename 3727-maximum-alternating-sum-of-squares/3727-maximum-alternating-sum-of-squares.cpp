class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        long long ans = 0;
        int mid = n/2;
        for(int i = 0; i < n; i++){
            if(i < mid){
                ans = ans - nums[i];
            }
            else{
                ans = ans + nums[i];
            }
        }
        return ans;
    }
};
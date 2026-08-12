class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result = 0;
        int diff = INT_MAX;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n - 2; i ++){
            int left = i + 1;
            int right = n - 1;
            while (left < right){
                int sum = nums[i] + nums[left] + nums[right];
                int currentdiff = abs(target - sum);
                if (currentdiff < diff){
                    diff = currentdiff;
                    result = sum;
                }
                if (sum == target){
                    return sum;
                }
                else if(sum < target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return result;
        
    }
};
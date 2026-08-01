class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 1;
        int i = 0;
        int j = 1;
        while (j < nums.size()){
            if (nums[i] != nums[j]){
                unique++;
                i++;
                nums[i] = nums[j];
                
                j++;
            }
            else{
                j++;
            }
        }
        return unique;
        for (int k=0;k < nums.size();k++){
            cout << nums[k] << " ,";
        }

        
    }
};
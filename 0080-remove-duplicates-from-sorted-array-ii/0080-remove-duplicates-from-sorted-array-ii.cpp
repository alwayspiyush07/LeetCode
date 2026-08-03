class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
        int same = 1;
        int elements = 1;
        int i = 0;
        int j = 1;
        while (j < nums.size()){
            if (nums[i]==nums[j]){
                if (same < 2){
                    same ++;
                    elements++;
                    i++;
                    nums[i]=nums[j];
                }
                j++;
            }
            else{
                same = 1;
                i++;
                elements++;
                nums[i]=nums[j];
                j++;
            }

        }
        return elements;
        
    }
};
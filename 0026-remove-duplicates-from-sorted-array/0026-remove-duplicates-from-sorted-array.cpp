class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0; // Pointer for the position of unique elements
        for (int j = 1; j < nums.size(); ++j) {
            if (nums[j] != nums[i]) {
                i++;               // Move pointer forward
                nums[i] = nums[j]; // Overwrite duplicate
            }
        }
        return i + 1; // Length of array with unique elements
    }
};
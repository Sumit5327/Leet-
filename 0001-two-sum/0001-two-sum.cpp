#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;  // map to store number -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // If complement is already in map, return the pair of indices
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }

            // Store the current number with its index
            seen[nums[i]] = i;
        }

        return {};  // will never reach here since the input guarantees one solution
    }
};
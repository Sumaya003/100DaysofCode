class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        
        // Traverse the array and mark the presence of each number
        for (int i = 0; i < nums.size(); ++i) {
            int index = abs(nums[i]) - 1; // Get the index to mark
            if (nums[index] > 0) {
                nums[index] = -nums[index]; // Mark the presence by negating the value
            }
        }
        
        // If a number is not marked, it means it didn't appear in the array
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                result.push_back(i + 1); // Add the missing number to the result
            }
        }
        
        return result;
    }
};
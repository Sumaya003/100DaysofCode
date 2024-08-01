class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums1Set(nums1.begin(), nums1.end());
        vector<int> resultSet;
        
        // Iterate through nums2 to find intersection
        for (int num : nums2) {
            if (nums1Set.count(num)) {
                resultSet.push_back(num);
                nums1Set.erase(num); // Remove to avoid duplicates
            }
        }
        
        // Convert resultSet to vector
        // vector<int> result(resultSet.begin(), resultSet.end());
        return resultSet;
    }
};
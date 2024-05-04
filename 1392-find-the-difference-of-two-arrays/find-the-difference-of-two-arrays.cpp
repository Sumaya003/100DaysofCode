#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        
        vector<int> diff1, diff2;
        
        for (int num : nums1) {
            if (set2.find(num) == set2.end() && set1.count(num) == 1) {
                diff1.push_back(num);
                set1.erase(num); // Remove the element from set1 to handle duplicates
            }
        }
        
        for (int num : nums2) {
            if (set1.find(num) == set1.end() && set2.count(num) == 1) {
                diff2.push_back(num);
                set2.erase(num); // Remove the element from set2 to handle duplicates
            }
        }
        
        return {diff1, diff2};
    }
};

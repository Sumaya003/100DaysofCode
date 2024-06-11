class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> count;
        for (int num : arr1) {
            count[num]++;
        }

        // Step 2: Initialize the result vector
        vector<int> result;

        // Step 3: Add elements from arr2 to the result vector
        for (int num : arr2) {
            if (count.find(num) != count.end()) {
                result.insert(result.end(), count[num], num);
                count.erase(num);
            }
        }

        // Step 4: Add the remaining elements in ascending order
        for (auto& pair : count) {
            result.insert(result.end(), pair.second, pair.first);
        }

        return result;        
    }
};
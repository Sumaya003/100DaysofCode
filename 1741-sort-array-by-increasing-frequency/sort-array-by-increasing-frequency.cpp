class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int> freqMap;
        for (const int& n : nums) {
            freqMap[n]++;
        }

        vector<pair<int, int>> freqVec;
        for (const auto& it : freqMap) {
            freqVec.push_back({it.first, it.second});
        }

        sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            // First sort by frequency (increasing order)
            if (a.second != b.second) {
                return a.second < b.second;
            }
            // If frequencies are the same, sort by value (decreasing order)
            return a.first > b.first;
        });

        vector<int> ans;
        for (const auto& it : freqVec) {
            int val = it.first;
            int freq = it.second;
            for (int i = 0; i < freq; i++) {
                ans.push_back(val);
            }
        }

        return ans;


        
    }
};
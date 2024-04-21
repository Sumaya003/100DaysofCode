class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
unordered_map<int, int> freqMap;
        
        // Count the frequency of each element
        for (int num : nums) {
            freqMap[num]++;
        }
        
        int maxFreq = 0;
        
        // Find the maximum frequency
        for (const auto& pair : freqMap) {
            maxFreq = max(maxFreq, pair.second);
        }
        
        int maxFreqCount = 0;
        
        // Count the number of elements with maximum frequency
        for (const auto& pair : freqMap) {
            if (pair.second == maxFreq) {
                maxFreqCount += pair.second;
            }
        }
        
        return maxFreqCount;
    }
};
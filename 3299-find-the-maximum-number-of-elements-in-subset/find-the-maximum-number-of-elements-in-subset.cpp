class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int result = 1;
        unordered_map<int, int> freq;
        for (auto num : nums) freq[num]++;

        for (auto [k, v] : freq) {
            if (k == 1) {
                result = max(result, v - (v % 2 == 0));
                continue;
            }

            long long curr = k;
            int length = 1;

            while (freq.count(curr) && freq[curr] >= 2 && curr < sqrt(INT_MAX)) {
                int next = curr * curr;
                if (freq.count(next) && freq[next] >= 1) {
                    length += 2;
                }
                curr = next;
            }

            result = max(result, length);
        }

        return result;
    }
};

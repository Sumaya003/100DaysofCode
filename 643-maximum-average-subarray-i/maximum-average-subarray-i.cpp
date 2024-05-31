class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < k) return 0.0; // Edge case, although problem guarantees valid inputs

        // Compute the initial window sum
        double current_sum = 0.0;
        for (int i = 0; i < k; i++) {
            current_sum += nums[i];
        }

        double max_sum = current_sum;

        // Slide the window
        for (int i = k; i < n; i++) {
            current_sum += nums[i] - nums[i - k];
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }

        // The maximum average is the maximum sum divided by k
        return max_sum / k;
        
    }
};
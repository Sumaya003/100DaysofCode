class Solution {
public:
    int n;
    
    bool check(int mid, vector<int>& price, int k) {
        int count = 1;
        int prev = price[0];
        
        for (int i = 1; i < n; i++) {
            if (price[i] - prev >= mid) {
                count++;
                prev = price[i];
            }
            if (count >= k) return true; // Early exit if the condition is met
        }
        
        return false;
    }
    
    int maximumTastiness(vector<int>& price, int k) {
        n = price.size();
        sort(price.begin(), price.end());
        
        int start = 0;
        int end = price.back() - price.front();  // Adjusted upper bound
        
        while (start < end) {
            int mid = (start + end + 1) / 2;
            if (check(mid, price, k)) {
                start = mid;
            } else {
                end = mid - 1;
            }
        }
        
        return start;
    }
};

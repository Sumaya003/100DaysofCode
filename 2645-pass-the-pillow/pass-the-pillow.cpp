class Solution {
public:
    int passThePillow(int n, int time) {
        // Determine the length of one complete cycle
        int cycle_length = 2 * (n - 1);
        
        // Find the effective time within the current cycle
        int effective_time = time % cycle_length;
        
        // Determine the position based on the effective time
        if (effective_time <= n - 1) {
            // Moving forward
            return 1 + effective_time;
        } else {
            // Moving backward
            return 2 * n - 1 - effective_time;
        }
    }
};

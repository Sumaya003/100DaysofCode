class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1"; // Base case

        string prev = countAndSay(n - 1); // Recursively get the previous string
        string result = ""; // Initialize the result string

        int count = 1; // Initialize the count of consecutive characters
        for (int i = 0; i < prev.length(); ++i) {
            // If the current character is the same as the next one, increase the count
            if (i + 1 < prev.length() && prev[i] == prev[i + 1]) {
                count++;
            } else {
                // If the current character is different from the next one, append the count and character to the result
                result += to_string(count) + prev[i];
                count = 1; // Reset the count
            }
        }

        return result;
    }
};
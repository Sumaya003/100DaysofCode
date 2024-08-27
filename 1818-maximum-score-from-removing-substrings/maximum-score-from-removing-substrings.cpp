class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int ans = 0;
        string temp = "";

        auto process = [&](char a, char b, int value) {
            for (char c : s) {
                if (!temp.empty() && temp.back() == a && c == b) {
                    temp.pop_back();
                    ans += value;
                } else {
                    temp.push_back(c);
                }
            }
            s = temp;  // Assign remaining string to `s`
            temp.clear();  // Clear temp for the next process
        };

        if (x > y) {
            process('a', 'b', x);
            process('b', 'a', y);
        } else {
            process('b', 'a', y);
            process('a', 'b', x);
        }

        return ans;
    }
};

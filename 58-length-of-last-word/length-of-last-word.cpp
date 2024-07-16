class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.size() - 1;
        while (i >= 0) {
            if (s[i] == ' ') {
                i--;
                continue;
            } else {
                count++;
                if(i == 0 || s[i - 1] == ' ') {
                    return count;
                }
            }
            i--;
        }
        return 0;
    }
};
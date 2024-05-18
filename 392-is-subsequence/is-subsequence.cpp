class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = 0, b = 0;
        int n = s.size(), m = t.size();
        while (a < n && b < m)
        {
            if (s[a] == t[b])
                a++;
            b++;
        }
        return a == n;
    }
};
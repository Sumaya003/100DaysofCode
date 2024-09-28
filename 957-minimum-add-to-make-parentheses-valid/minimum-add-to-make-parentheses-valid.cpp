class Solution {
public:
    int minAddToMakeValid(string s) {

        stack<int> st;
        for (int i = 0; i < s.length(); i++) {
            if (!st.empty() && st.top() == '(' && s[i] == ')') {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }

        int a = 0, b = 0;
        while (!st.empty()) {
            if (st.top() == '{') {
                a++;
                st.pop();
            } else {
                b++;
                st.pop();
            }
        }
        return (a-b)<0?b-a:a-b;
    }
};
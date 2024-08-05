class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int x : asteroids) {
            bool survive = 1;
            if (x > 0)
                st.push(x);
            else { // x<0
                while (!st.empty()) {
                    int y = st.top();
                    if (y < 0)
                        break;
                    else if (x + y == 0) {
                        survive = 0;
                        st.pop();
                        break;
                    } else if (x + y < 0) {
                        st.pop();
                    } else {
                        survive = 0;
                        break;
                    }
                }
                if (survive)
                    st.push(x);
            }
        }
        int n = st.size();
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};
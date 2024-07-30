class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char ch : s)
        {
            if(ch == '*')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
        string ans = "";

        while(!st.empty())
        //This result in Memory issue as string is created repeatedly
        // {
        //     ans = st.top() + ans;      
        //     st.pop();
        // }
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
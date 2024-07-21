class Solution {
public:
    string reverseParentheses(string s) {
       stack<char> st;
       string ans ="" ;
       for(int i = 0;i<s.size();i++){
        if(s[i]!=')'){
            st.push(s[i]);
        }else{
            while(!st.empty() && st.top() != '('){
                ans.push_back(st.top());
                st.pop();
            }
            st.pop();
            if(i!=s.size()){
                for (char t : ans) {
                    st.push(t);
                }
                ans="";
            }
        }
       }
       ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;

       
    } 

    
};
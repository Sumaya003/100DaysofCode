class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int>st;
        for(int i = 0;i<n;i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                int newNum = 0;
                char token = tokens[i][0]; // Assuming tokens[i] is a string of one character

                switch (token) {
                    case '+':
                        newNum = num2 + num1;
                        break;
                    case '-':
                        newNum = num2 - num1;
                        break;  
                    case '*':
                        newNum = num2 * num1;
                        break;
                    case '/':
                        newNum = num2 / num1;
                        break;
                }
                st.push(newNum);
            }
            else
                st.push(stoi(tokens[i]));

        }
        return st.top();
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        // if(strs[0] == ""){
        //     // ans = "";
        //     return ans;
        // }
            
        for(int i = 0;i<strs[0].size();i++){
            for(int j = 1;j<strs.size();j++)
                if(strs[0][i] == strs[j][i]){
                    continue;
                }
                else{
                    return ans;
            }
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};
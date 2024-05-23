class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part) < s.length()){
            // cout<<s.find(part)<<endl; Returns index
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};
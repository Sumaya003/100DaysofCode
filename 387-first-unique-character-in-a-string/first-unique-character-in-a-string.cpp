class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map<char, int> frequency;
        
        // // Count the frequency of each character
        // for (char c : s) {
        //     frequency[c]++;
        // }
        
        // // Find the first character with frequency 1
        // for (int i = 0; i < s.length(); i++) {
        //     if (frequency[s[i]] == 1) {
        //         return i;
        //     }
        // }

        // return -1;

        unordered_map<int,int> mp;
        for(auto c:s){
            mp[c]++;
        }
        for(int i = 0;i<s.size();i++){
            if(mp[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};

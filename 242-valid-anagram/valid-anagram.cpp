class Solution {
public:
    bool isAnagram(string s, string t) {
        // bool ans = false;
        if(s.size()!= t.size()){
            return false;
        }
        unordered_map<char,int> mp;
        for(auto ch : s){
            mp[ch]++;
        }

        for(auto x:t){
            if(mp.find(x)!=mp.end() && mp[x] > 0){
                mp[x]--;
            }else{
                return false;
            }
        }
        // if(mp.empty()){
        //     ans =  true;
        // }
        return true;


    }
};
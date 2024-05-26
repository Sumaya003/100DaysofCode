class Solution {
public:
    string sortVowels(string s) {
        vector<char> vovel;
        for(char c : s)
        {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' 
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                vovel.push_back(c);
            }
        }
        sort(vovel.begin(),vovel.end());
        string ans = "";
        int i = 0;
        for(char c : s)
        {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' 
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                ans.push_back(vovel[i]);
                i++;
            }
            else
            {
                ans.push_back(c);
            }
        }
        return ans;
    
        
    }
};
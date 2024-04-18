class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        // Concatenate all strings in word1 into one string
        string str1;
        for (const string& s : word1) {
            str1 += s;
        }
        
        // Concatenate all strings in word2 into one string
        string str2;
        for (const string& s : word2) {
            str2 += s;
        }
        
        // Compare the two concatenated strings
        return str1 == str2;
    }
};

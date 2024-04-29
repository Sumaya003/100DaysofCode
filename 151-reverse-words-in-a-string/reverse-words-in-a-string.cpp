#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word;
        vector<string> words;
        
        // Split the string by spaces and store each word in a vector
        while (iss >> word) {
            words.push_back(word);
        }
        
        // Reverse the order of words in the vector
        reverse(words.begin(), words.end());
        
        // Join the words with a single space between them
        stringstream result;
        for (const string& w : words) {
            result << w << " ";
        }
        
        // Convert stringstream to string and remove trailing space
        string reversed = result.str();
        if (!reversed.empty()) {
            reversed.pop_back(); // Remove the trailing space
        }
        
        return reversed;
    }
};

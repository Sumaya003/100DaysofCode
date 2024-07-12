class Solution {
public:
    string reverseWords(string s) {
        vector<string> store;
        string word = "";
        for(char x:s){
            if(x!=' '){
                word.push_back(x);
                
            }else{
                if(!word.empty()){
                    
                    store.push_back(word);
                    word = "";
                }
            }
        }
        
        if(!word.empty()) {
            store.push_back(word);
        }
        
        word="";
        reverse(store.begin(),store.end());
    
        for (size_t i = 0; i < store.size(); ++i) {
            word += store[i];
            if (i != store.size() - 1) {
                word += " ";
        }
    }

    return word;
}

};
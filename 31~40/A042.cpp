class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> n_s;
        vector<char> n_t;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '#'){
                if(!n_s.empty()) n_s.pop_back();
            } else {
                n_s.push_back(s[i]);
            }
        }
        
        for(int i = 0; i < t.length(); i++){
            if(t[i] == '#'){
                if(!n_t.empty()) n_t.pop_back();
            } else {
                n_t.push_back(t[i]);
            }
        }
        
        return n_s == n_t;
    }
};
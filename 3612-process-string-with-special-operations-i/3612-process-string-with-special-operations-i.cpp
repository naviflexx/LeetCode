class Solution {
public:
    string processStr(string s) {
        string result;
        for(char ax : s){
            if(ax == '*' && !result.empty()) result.pop_back(); 
            else if(ax == '#') result+=result;
            else if(ax == '%') reverse(result.begin() , result.end());
            else if(islower(ax))result+=ax;
        }
        return result;
    }
};
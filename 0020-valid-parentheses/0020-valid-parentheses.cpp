class Solution 
{
public:
    bool isValid(string s) 
    {
        int n=s.size();
        //if( s[0]==')' || s[0] == ']' || s[0]== '}') return false;
        //if( s[n-1]=='(' || s[n-1] == '[' || s[n-1]== '{') return false;
        
        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i] == ')' && !st.empty() && st.top()=='('){
                st.pop(); continue; 
            }
            if(s[i] == ']' && !st.empty() && st.top()=='['){
                st.pop(); continue; 
            }
            if(s[i] == '}' && !st.empty() && st.top()=='{'){
                st.pop(); continue; 
            }
            st.emplace(s[i]);

        }
        if(st.empty()) return true;
        return false;
    }
};
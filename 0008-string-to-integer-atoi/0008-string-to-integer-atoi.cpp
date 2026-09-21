class Solution 
{
public:
    int myAtoi(string s) 
{
    int i=0 , n = s.size();
	int sign=1;
	while(i<n && s[i]==' '){
	    i++;
	}
	if(i<n && s[i]=='+' || s[i]=='-'){
	    if(s[i]=='-')  sign *=-1;
	    i++;
	}
	
	long long ans=0;
	while(i<n && isdigit(s[i])){
	    ans = ans*10 + (s[i]-'0');
	    i++;
        if(sign*ans>INT_MAX) return INT_MAX;
        if(sign*ans<INT_MIN) return INT_MIN;
	}
    long long answer = ans*sign;
    return answer;
	
}
};
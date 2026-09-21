class Solution 
{
public:
    int reverseDegree(string s) 
{
        int sum = 0;
        for(int i=1; i<=s.size(); i++) {
        char z = s[i-1];
	    int x = i*(26-((int)z-97));
	    sum += x;
        }
        return sum;
}
};
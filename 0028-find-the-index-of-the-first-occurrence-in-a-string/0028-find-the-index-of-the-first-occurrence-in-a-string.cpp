class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        int p = -1;
	    int s1size = haystack.size();
	    int s2size = needle.size();
	
	    for(int i=0; i<=(s1size-s2size); i++)
	    {
	        if(haystack.substr(i, s2size)==needle)
	        {
	            return i;
	            break;
	        }
	    }
        return -1;

    }
};
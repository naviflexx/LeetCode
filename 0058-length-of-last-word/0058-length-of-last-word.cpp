class Solution 
{
    public:
    int lengthOfLastWord(string s) 
    {
          for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i]==' ')
        {
            s.erase(i,1);
        }
        else
        {
            break;
        }
    }
        string rev(s.rbegin() , s.rend());
        int k=rev.size();
        int i;
        for(i=0; i<k; i++)
        {
            if(rev[i]==' ')
            {
                break;
            }
        }
        return i;

    }
};
class Solution {
public:
    int maxArea(vector<int>& height) 
{
	int i=0 , j=height.size()-1;
	int max=0; int k=0;
	while(i<j){
	    k=min(height[i], height[j]);
        if(k*(j-i)>max) max=k*(j-i);
        if(height[i]>height[j]) j--;
        else i++;
	}
	return max;
}
};
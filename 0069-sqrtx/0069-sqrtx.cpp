class Solution 
{
public:
    int mySqrt(int x) 
{
    long long k=0;
	for(long long i=0; i*i<=x; i++){
        k=i;
	}
	return k;
}
};
class Solution {
public:
    bool checkPerfectNumber(int num) {

    int ct = 0;
    if(num==1){
        return false;
    }
	for(int i=1; i<=num/2; i++){
	    if(num%i==0){
	        ct+=i;
	    }
	    else{
	        continue;
	    }
	}
	if(ct==num){
	    return true;
	}
	else{
	    return false;
	}
    }
};
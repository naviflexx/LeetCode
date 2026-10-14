class Solution 
{
public:
    bool lemonadeChange(vector<int>& bills) 
{
        int five=0 , ten=0;

        if(bills[0] !=5 ) return false;
        if(bills.size()==1){
            if(bills[0] != 5) return false;
            else return true;
        }
        if(bills[0]==5 && bills[1]==20) return false;

        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5) five++;
            else if(bills[i]==10){
                ten++;
                if(five==0) return false;
                else five--;
            }
            else{
                if(five==0) return false;
                else if(five<3 && ten==0) return false;
                else{
                    if(ten>=1){
                    five--; ten--;
                    }
                    else five -=3;
                }
                
            }
        }
        return true;
}
};
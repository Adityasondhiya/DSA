class Solution {
public:
    bool checkDivisibility(int temp) {
        int sum=0;
        int product=1;
        int n=temp;

        while(n){
            int once=n%10;
            n/=10;
            sum+=once;
            product*=once;

        }
        return temp%(sum+product)==0;
        
    }
};
class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
           int digit=1;
           int temp=i;

            while(temp){
                digit*=temp%10;
                temp/=10;
            }
            cout<<digit<<" ";

            if((digit%t)==0) return i;
        }
        return -1;
        
    }
};
class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        bool aliceTurn=true;
        int stones=10;
        while(n-stones>=0){
            n-=stones;
            stones--;
            aliceTurn=!aliceTurn;

        }

        return !aliceTurn;
        
        
    }
};
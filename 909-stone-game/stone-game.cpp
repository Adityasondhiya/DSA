class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice=0;
        int bob=0;
        int i=0;
        int j=piles.size()-1;
        while(i<j){
            alice+=max(piles[i],piles[j]);
            bob+=min(piles[i],piles[j]);
            i++;
            j--;


        }
        return alice>bob;
        
    }
};
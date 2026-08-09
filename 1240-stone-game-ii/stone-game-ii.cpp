class Solution {
public:
    int n;
    int dp[2][101][101];
    int solveforalice(vector<int> piles,int i,int m,int person){
        if(i>=n) return 0;
        int result= (person==1)?-1:INT_MAX;
        int stones=0;

        if(dp[person][i][m] !=-1)return dp[person][i][m] ;

        for(int x=1;x<=min(2*m,n-i);x++){
            stones+=piles[i+x-1];
            if(person==1){
                result=max(result,stones+solveforalice(piles,i+x,max(m,x),0));
            }
            else result=min(result,solveforalice(piles,i+x,max(m,x),1));
        }
        
        return dp[person][i][m]=result;
      

    }

    int stoneGameII(vector<int>& piles) {
        n=piles.size();
        memset(dp,-1,sizeof(dp));

        return solveforalice(piles,0,1,1);
        
        
    }
};
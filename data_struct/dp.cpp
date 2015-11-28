//æ≠µ‰dpŒ Ã‚
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Value[] = {509, 838, 924, 650, 604, 793, 564,
                651, 697, 649, 747, 787, 701, 605, 644};

int dp[16][5001];

void DP();
void Search(int m, int n);
int main(){
    DP();
    Search(15, 5000);
    cout<<endl<<dp[15][5000]<<endl;
}

void DP(){
    memset(dp, sizeof(dp),0);
    for(int i= 1; i<= 15; ++i){
        for(int j= 0; j<= 5001; ++j){
            dp[i][j] = dp[i-1][j];
            if(j>= Value[i]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-Value[i]]+Value[i]);
            }
        }
    }
}

void Search(int m, int n){
    if(!m)
        return;
    if(dp[m][n] == dp[m-1][n]){
        Search(m-1,n);
    }else{
        Search(m-1, n-Value[m]);
        cout<<m+1<<'-';
    }
}

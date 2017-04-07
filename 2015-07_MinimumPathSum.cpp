#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
       int row , col;
       cin >> row >> col;
       int grid[row][col];
       int dp[row][col];

       for(int i = 0; i < row; i++){
           for(int j = 0; j < col; j++)
               cin >> grid[i][j];
       }

       dp[0][0] = grid[0][0];

       for(int i = 1; i < row; i++)
          dp[i][0] = dp[i - 1][0] + grid[i][0];

       for(int i = 1; i < col; i++)
          dp[0][i] = dp[0][i - 1] + grid[0][i];

       for(int i = 1; i < row; i++){
           for(int j = 1; j < col; j++)
               dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
       }

       cout << dp[row - 1][col - 1] << endl;

    }

    return 0;
}
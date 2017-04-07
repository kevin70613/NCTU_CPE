#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  long long dp[30005] = {1};
  long long possible[11] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
  int money1, money2;

  for(int i = 0; i < 11; i++){
      for(int j = possible[i]; j <= 30000; j++)
         dp[j] += dp[j - possible[i]];
  }

  while( scanf("%d.%d", &money1, &money2) != EOF && !(money1 == 0 && money2 == 0) ){
      printf( "%3d.%02d%17lld\n", money1, money2, dp[money1 * 100 + money2] );
  }

  return 0;
}


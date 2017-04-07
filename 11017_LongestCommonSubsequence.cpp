#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string str1, str2;

	while( cin >> str1 >> str2 && str1 != "" && str2 != ""){
		int str1Len = str1.length();
		int str2Len = str2.length();
        int dp[str1Len + 1][str2Len + 1];
        //int longest = 0;

        for(int i = 0; i <= str1Len; i++)
        	dp[i][0] = 0;
        for(int j = 0; j <= str2Len; j++)
        	dp[0][j] = 0;

        for(int i = 1; i <= str1Len; i++){
        	for(int j = 1; j <= str2Len; j++){
        		if(str1[i - 1] == str2[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    //longest = max(longest, dp[i][j]);
                    //cout << str1[i - 1] << " , " << str2[j - 1] << endl;
        		}
        		else
        			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        	}
        }

        cout << dp[str1Len][str2Len] << endl;

	}

	return 0;
}
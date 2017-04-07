#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <algorithm>
  
using namespace std;

int main(){
	int caseNum, r, s[30001];

	cin >> caseNum;
 	while( caseNum-- ){
 		int sum = 0;
		cin >> r;

 		for(int i = 0; i < r; i++){
 			cin >> s[i];
 		}
		sort(s, s+r);
 		for(int j = 0; j < r; j++){
 			if(r % 2 == 1)
 				sum += abs( s[j] - s[r/2] );
   			else
				sum += abs( s[j] - ( (s[r/2-1] + s[r/2]) / 2 ) );
  		}
 		cout << sum << endl;
	}

	return 0;  
}
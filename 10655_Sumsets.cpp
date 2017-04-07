#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
#define MAXSIZE 1000

int find(int set[MAXSIZE], int n){
	for(int d = n - 1; d >= 0; d--){
		for(int a = 0; a < n; a++){
			for(int b = a + 1; b < n; b++){
				for(int c = b + 1; c < n; c++){
					if( (set[d] == set[a] + set[b] + set[c]) && a != d && b != d && c != d)
						return set[d];
				}
			}
		}
	}
	return INT_MAX;
}

int main(){
	int n;
	while(cin >> n && n){
		int set[MAXSIZE] = {0};
		int ans;
		for(int i = 0; i < n; i++)
			cin >> set[i];
		sort(set, set + n);
        ans = find(set, n);
        if(ans == INT_MAX)
        	cout << "no solution" << endl;
        else
        	cout << ans << endl;
	}

	return 0;
}
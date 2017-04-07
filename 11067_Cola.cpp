#include <iostream>

using namespace std;

int main(){
	int n, k = 3;
	while(cin >> n){
		int ans = n;
		while(n / k){
			ans += n / k;
			n = n / k + n % k;
		}

		if((n+1) == k)
			ans++;

		cout << ans << endl;
	}

	return 0;
}
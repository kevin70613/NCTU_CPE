#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int input[100000];
	int n;

	while( cin >> n){
		//int incs[100000];

		for(int i = 0; i < n; i++)
			cin >> input[i];

		vector<int> v;
		v.push_back(input[0]);

		for(int i = 1; i < n; i++){
			if(input[i] > v.back()){
                v.push_back(input[i]);
			}
			else{
                *lower_bound(v.begin(), v.end(), input[i]) = input[i];
			}
		}

        cout << v.size() << endl;
	}
}


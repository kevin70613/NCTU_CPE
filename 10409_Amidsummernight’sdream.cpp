#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int num;
	while(cin >> num){
		int xArr[num];
		for(int i = 0; i < num; i++){	
		    cin >> xArr[i];		
		}
        sort(xArr, xArr + (num-1));

	}
}
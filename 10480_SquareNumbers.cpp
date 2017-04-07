#include <iostream>

using namespace std;

int main(){
	int a, b;
    int squareNum[400];

    for(int i = 0; i < 400; i++)
    	squareNum[i] = i * i;

	while( cin >> a >> b && a && b){
		 int count = 0;
         for(int i = 0; i < 400; i++){
             if(squareNum[i] >= a && squareNum[i] <= b){
             	count ++;
             }
         }
         cout << count << endl;
	}
}
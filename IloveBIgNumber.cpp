#include <iostream>
#include <cstdio>

using namespace std;

#define LEN 10000
#define MAX 1000

int ans[MAX+1];

void computeFact(){
	// Num use to store Factor n! value 
	int Num[LEN];
	// initialize
	for(int i = 0; i < LEN; i++)
		Num[i] = 0;

	for(int i = 0; i <= MAX; i++)
       ans[i] = 0;
    
    // 1! = 1,
	Num[0] = 1;
	// 0! = 1 , sum = 1 ; 1! = 1 , sum = 1
	ans[0] = 1;
	ans[1] = 1;
    
    // start from second number of Factor
    for(int i = 2; i <= MAX; i++){
    	// big number multiply a integer number
    	for(int j = 0; j < LEN; j++)
    		Num[j] *= i;
    	// handle 進位問題
    	for(int j = 0; j < LEN; j++){
    		if(Num[j] >= 10){
    			Num[j+1] += Num[j] / 10;
    			Num[j] = Num[j] % 10;
    		}
    	}
        // compute each digit sum
        for(int j = 0; j < LEN; j++)
        	ans[i] += Num[j];
    }
   
}


int main(){

   int input;  
   computeFact();

   while( cin >> input){
       cout << ans[input] << endl;
   }

   return 0;
}
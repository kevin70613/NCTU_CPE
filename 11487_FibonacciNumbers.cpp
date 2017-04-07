#include <iostream>

using namespace std;

#define MAX 10000
// 到 Fib(10000)
int Fib[MAX][MAX + 1];


void generateBigFib(){
	
	int i, j, k, l, carry;
	// initialize
    for(i = 0; i < MAX; i++){
    	for(j = 0; j <= MAX; j++){
            Fib[i][j] = 0;
    	}
    }
    // Fib(0) = 1
    Fib[0][0] = 1;
    // Fib(1) = 1
    Fib[1][0] = 1;

    for(k = 2; k < MAX; k++){
        for(l = carry = 0; l <= MAX; l++){
            Fib[k][l] = Fib[k - 1][l] + Fib[k - 2][l] + carry;
            carry = Fib[k][l] / 10;
            Fib[k][l] = Fib[k][l] % 10;
        }
    }

}


int main(){
   generateBigFib();
   
   int input;
   while( cin >> input){
   	   int flag = 0;
   	   for(int a = MAX; a >= 0; a--){
   	   	   if(Fib[input - 1][a] != 0)  // 前面的0不要印
   	   	   	   flag = 1;
   	   	   if(flag)
   	   	   	   cout << Fib[input - 1][a];
   	   }
   	   cout << endl;
   }

}
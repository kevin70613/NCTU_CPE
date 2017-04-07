#include <iostream>
#include <cstdio>

using namespace std;

// underflow : 7!(含)以下
// overflow : 14!(含)以上
long long int Factorial(int n){
	long long int result = 1;
	for(int i = n; i >= 1; i--)
		result *= i;
	return result;
}



int main(){
	int input;
	while( cin >> input ){
		if(input < 0){ // negative number
		   input = input * -1;
       if( input % 2 ){ // -1, -3, ... (odd) => positive infinity
          cout << "Overflow!" << endl;
        }
        else{ // -2, -4, ... (even) => negative infinity
          cout << "Underflow!" << endl;   
        }
    }else{ // positive number
        if(input <= 7)
      	  cout << "Underflow!" << endl;
        else if (input >= 14)
       	  cout << "Overflow!" << endl;
        else{
          long long int ans;
          ans = Factorial(input);
          cout << ans << endl;
        }
    }
	}

    return 0;
}
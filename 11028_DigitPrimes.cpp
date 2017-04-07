#include <iostream>

using namespace std;

bool isPrime(int n){
	
	if(n == 0 || n == 1)
		return false;
	
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0)
			return false;
	}

	return true;
}

int getSum(int n){
	if( n > 9)
		return (n % 10) + getSum(n / 10);
	else
		return n;
}


int main(){
    
	int n;
	cin >> n;
	
	while(n--){
	   int t1, t2;
       int count = 0;
       cin >> t1 >> t2;
	   for(int i = t1; i <= t2; i++){
		   if(isPrime(i)){
              if( isPrime( getSum(i) ) ){
           	      count++;
              }
		   }
	   }
	   cout << count << endl;
    }

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
	int countNum;
	cin >> countNum;

	for(int i=0; i<countNum; i++){
         int numN;
         int strQ[1000];
         int count = 0;
         cin >> numN;

        if(numN == 1){
           cout << "1" << endl;
        }
        else{
           for(int j=9;j>1;j--){
         	  while (numN % j == 0){
         	      numN = numN / j;
                  strQ[count] = j;
                  count++;
           	  }
           	  if(numN == 1) break;
           }
           if(numN != 1)
           	   cout << "-1" << endl;
           else{
           	   for(int k=count-1;k>=0;k--){
           	   	   cout << strQ[k];
           	   }
           	   cout << endl;
           }
        }

	}

	return 0;
}
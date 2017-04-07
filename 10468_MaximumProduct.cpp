#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int N, caseNum = 1;
  int S[20];

  while(cin >> N){
     for(int i = 0; i < N; i++)
        cin >> S[i];
    
     int temp, maxproduct = 0;
     for(int i = 0; i < N; i++){
        temp = 1;
        for(int j = i; j < N; j++){
           temp *= S[j];
           if(temp > maxproduct)
              maxproduct = temp;
        }
     }
     cout << "Case #" << caseNum++ << ": The maximum product is " << maxproduct << "." << endl << endl;
  }

  return 0;
}
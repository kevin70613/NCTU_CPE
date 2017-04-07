#include <iostream>

using namespace std;

long long bigmod(long long B, long long P, long long M ){
    if(P == 0)
        return 1;
    else if (P == 1) 
        return B % M;
    else{
       unsigned long i, res = 1;
       i = 1;
       res = B % M;
       while(2 * i < P){
          res = (res * res) % M;
          i *= 2;
       }
       return (res * bigmod(B, P - i, M)) % M;
    }

}

int main()
{
    long long B, P, M;
    while(cin>>B>>P>>M){
        cout<<bigmod(B, P, M)<<endl;
    }
    return 0;
}
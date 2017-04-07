#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N;
    while(cin >> N && N != 0){
        string s[N];
        for(int i=0; i<N; i++){
            cin>>s[i];
        }
        int x=1;
        while(x < N){
            if(x == 0 || s[x-1]+s[x] >= s[x]+s[x-1]) 
                x++;
            else{
                string t=s[x];
                s[x]=s[x-1];
                s[x-1]=t;
                x--;
            }
        }
        for(int i = 0; i < N; i++)
            cout << s[i];
        cout << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(){
	int ans = 0;
	int num[201];
	for(int i = 1; i <= 200; i++){
       int temp = 1;
       for(int j = 1; j <= i; j++)
       	   temp = temp * i % 10;

       ans = (ans + temp) % 10;
       num[i] = ans;
	}

	//int N;
	//while( cin >> N && N){
    //   cout << num[N] << endl;           
	//}

	// have question here
    string in;
    while(cin>>in && in!="0"){
        int len=in.length();
        int c=0;
        for(int i=0; i<len; i++)
            c=(c*10+in[i]-'0')%100;
        if(!c)
            c=100;
        cout<<num[c]<<endl;
    }


	return 0;
}
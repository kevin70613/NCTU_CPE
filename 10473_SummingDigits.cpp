#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	string str;
	while(cin >> str && str != "0"){
	   
	   while( str.length() > 1){
           int digNum[1000000000];
           int sum = 0;
           for(int i = 0; i < str.length(); i++)
       	      digNum[i] = str[i] - '0';
       
           for(int i = 0; i < str.length(); i++)
              sum += digNum[i];

           stringstream ss;
           ss << sum;
           ss >> str;
        }
        cout << str << endl;
	}

	return 0;
}
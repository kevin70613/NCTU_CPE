#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
	string str1, str2;

	while(cin >> str1 >> str2){

        if( str2.size() < str1.size()){
        	cout << "No" << endl;
        }
        else{
           int s_check = 0;
           for(int i=0;i<str2.size();i++){
           	  if(str1[s_check] == str2[i])
           	  	 s_check++;
           }
           if(s_check == str1.size())
           	  cout << "Yes" << endl;
           else
           	  cout << "No" << endl;

        } 

	}

	return 0;
}

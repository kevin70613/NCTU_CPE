#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	string aa, bb;
	while(cin >> aa >> bb){
		int ans[600] = {0}, a[300] = {0}, b[300] = {0};
		for(unsigned int i=0; i < aa.size(); i++)
			a[aa.size()-i-1] = aa[i] - '0';
		for(unsigned int i=0; i < bb.size(); i++)
			b[bb.size()-i-1] = bb[i] - '0';

		for(unsigned int j=0; j<aa.size(); j++){
			for(unsigned int k=0; k<bb.size(); k++){
				ans[j+k] += a[j] * b[k];
			}
		}

		for (unsigned int i=0;i< 600;i++){
            while (ans[i]>=10){
            	ans[i]-=10;
            	ans[i+1]++;
            }
        }
        int ck=0;
        for (int i=599;i>=0;i--){
            if (ans[i]!=0){
                ck=1;
            }
            if (ck)
                cout<< ans[i];
        }
        if (!ck)
            cout<< 0;
        cout<< endl;

	}
}
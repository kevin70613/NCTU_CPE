#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    int datasetNum;
    cin >> datasetNum;

    while(datasetNum--){
        int rightAns = 0;
        int wrongAns = 0;
        string input;
        int computerNum, ci, cj;
        char type;
        cin >> computerNum;

        int set[computerNum + 1];
        for(int i = 1; i <= computerNum; i++){
            set[i] = i;
        } 
        cin.ignore();
        while( getline(cin, input) && input !="" ){
             stringstream ss(input);
             ss >> type >> ci >> cj;
             if(type == 'c'){
                int seti = set[ci];
                int setj = set[cj];
                for(int i = 1; i <= computerNum; i++){
                    if(set[i] == seti || set[i] == setj) // find connected computer no.
                        set[i] = min(set[ci], set[cj]);
                }
             }else if(type == 'q'){
                if(set[ci] != set[cj]){
                    wrongAns++;
                }else{
                    rightAns++;
                }

             }
        }
        cout << rightAns << ',' << wrongAns << endl;
        if(datasetNum)
            cout << endl;
    }

    return 0;
}
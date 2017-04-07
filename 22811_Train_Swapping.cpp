#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int iterNum;
	while(cin >> iterNum){
		for(int i = 0; i < iterNum; i++){
			int train[51];
		    int total = 0;
			int trainNum;
			cin >> trainNum;
			for(int j = 0; j < trainNum; j++)
				cin >> train[j];
            
            for(int j = 0; j < trainNum; j++){
            	for(int k = j + 1; k < trainNum; k++){
            		if( train[j] > train[k] ){
            			int temp = train[k];
            			train[k] = train[j];
            			train[j] = temp;
            			total++;
            		}
            	} 
            }
   		    cout << "Optimal train swapping takes " << total << " swaps." << endl;
		}
	}

	return 0;
}
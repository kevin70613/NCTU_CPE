// http://ikatyang.blogspot.tw/2014/08/uva-10074-take-the-land.html
#include <iostream>

using namespace std;

int main(){
	int M, N;
	while( cin >> M >> N && M && N){
        int state, max = 0;
        int map[M][N];
        for(int i = 0; i < M; i++){
        	for(int j = 0; j < N; j++){
        		cin >> state;
                if(state == 1) // is tree
                	map[i][j] = 0;
                else{ // state == 0, not tree
                    if(i > 0)
                       map[i][j] = map[i - 1][j] + 1;
                    else
                       map[i][j] = 1;
                }
        	}
        	for(int j = 0; j < N; j++){
               int value = map[i][j], sum = value;
                // 加右邊
               for(int k = j + 1; k < N && value <= map[i][k]; k++)
               	   sum += value;
                // 加左邊
               for(int k = j - 1; k >= 0 && value <= map[i][k]; k--)
               	   sum += value;

               if(sum > max)
               	  max = sum;
        	}
        }
        cout << max << endl;
	}

	return 0;
}



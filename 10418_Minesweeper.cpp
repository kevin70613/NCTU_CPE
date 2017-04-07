#include <iostream>
#include <string>

#define maxSize 100

using namespace std;

void mine_num(char mine[][maxSize], int row, int col, int rmax, int cmax){
     int mNum = 0;

     if(mine[row][col] != '*'){
          // up
        if(row - 1 >= 0){
           if(mine[row - 1][col] == '*') mNum++;
        }
          // down
        if(row + 1 <= rmax){
     	   if(mine[row + 1][col] == '*') mNum++;
        }
         // left
        if(col - 1 >= 0){
           if(mine[row][col - 1] == '*') mNum++;
        }
         // right
        if(col + 1 <= cmax){
     	   if(mine[row][col + 1] == '*') mNum++;
        }
         // left up
        if(row - 1 >= 0 && col - 1 >= 0){
     	   if(mine[row - 1][col - 1] == '*') mNum++;
        }
         // left down
        if(row + 1 <= rmax && col - 1 >= 0){
     	   if(mine[row + 1][col - 1] == '*') mNum++;
        }
         // right up
        if(row - 1 >= 0 && col + 1 <= cmax){
     	   if(mine[row - 1][col + 1] == '*') mNum++;
        }
         // right down
        if(row + 1 <= rmax && col + 1 <= cmax){
     	   if(mine[row + 1][col + 1] == '*') mNum++;
        }

        switch(mNum){
     	    case 0:
     	       mine[row][col] = '0';
     	       break;
      	    case 1:
     	       mine[row][col] = '1';
     	       break;
      	    case 2:
     	       mine[row][col] = '2';
     	       break;
          	case 3:
     	       mine[row][col] = '3';
     	       break;
      	    case 4:
     	       mine[row][col] = '4';
     	       break;
      	    case 5:
     	       mine[row][col] = '5';
     	       break;
            case 6:
     	       mine[row][col] = '6';
     	       break;   
      	    case 7:
     	       mine[row][col] = '7';
     	       break;
          	case 8:
     	       mine[row][col] = '8';
     	       break;     	     
     	   default:
     	       break;  	        	        	         	      	       	        	        	    

        }
    }
}



int main(){
	int x, y, count = 1, start = 0;
    char map[maxSize][maxSize] = {0};
	while(cin >> x >> y && x && y){

		for(int i = 0; i < x; i++){
			for(int j = 0; j < y; j++)
				cin >> map[i][j];
		}
        
        for(int i = 0; i < x; i++){
        	for(int j = 0; j < y; j++){
        		mine_num(map, i, j, x, y);
        	}
        }
        
        if(start != 0) cout << endl;
        cout << "Field #" << count << ":" << endl;
        for(int i = 0; i < x; i++){
        	for(int j = 0; j < y; j++){
        		cout << map[i][j];
        	}
        	cout << endl;
        }

        start = 1;
        count++;
	}

	return 0;
}
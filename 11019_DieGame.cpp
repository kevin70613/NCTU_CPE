#include <iostream>
#include <string>

using namespace std;

struct Dice{
   int up, down, north, south, east, west;
};

struct Dice d;

int main(){
	int input;
	
	while(cin >> input && input){
        string str;
         // initialize dice
        d.up = 1;
        d.down = 6;
        d.north = 2;
        d.east = 4;
        d.south = 5; 
        d.west = 3;

        while( input-- ){
            cin >> str;
            if(str == "north"){
            	d.north = d.up;
                d.up = d.south;
                d.down = 7 - d.up;
                d.south = 7 - d.north;
            }
            if(str == "east"){
            	d.east = d.up;
            	d.up = d.west;
            	d.west = 7 - d.east;
                d.down = 7 - d.up;
            }
            if(str == "west"){
                d.west = d.up;
                d.up = d.east;
                d.east = 7 - d.west;
                d.down = 7 - d.up;
            }
            if(str == "south"){
                d.south = d.up;
                d.up = d.north;
                d.north = 7 - d.south;
                d.down = 7 - d.up;
            }
        }

        cout << d.up << endl;
	}

	return 0;
}
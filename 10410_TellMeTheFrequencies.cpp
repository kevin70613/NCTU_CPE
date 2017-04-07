#include <iostream>
#include <algorithm>
#include <string>

// ascii code table size
#define table 130
using namespace std;

int main(){
   
   string text;
   int i, j, start = 0;
   while( getline(cin, text) ){
       if(start != 0)    cout << endl;
       
       int ascii[table] = {0};
        // the max of ascii is 127
       int asciiMin = 200;
        // the min of ascii is 0
       int asciiMax = 0;
       int maxNum = 0;
       
       for( i = 0; i < text.length(); i++){
           // text[i] is character and convert to integer 
          ascii[ (int)text[i] ]++;
          asciiMin = min( asciiMin, (int)text[i]);
          asciiMax = max( asciiMax, (int)text[i]);
          maxNum = max( maxNum, ascii[ (int)text[i] ]);
       }

       for( i = 1; i <= maxNum; i++){
          for( j = asciiMax; j >= asciiMin; j--){
               if( ascii[j] == i )
                  cout << j << " " << i << endl;
          }
       }

       start = 1;
   }
   return 0;
}
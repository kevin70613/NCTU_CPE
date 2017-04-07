#include <iostream>
#include <cstdio>
using namespace std;

//const int MAX_MAP_LIMIT = 100;
#define MAX_MAP_LIMIT 100

void visit(bool isVisited[][MAX_MAP_LIMIT+5], char map[][MAX_MAP_LIMIT+5], int i, int j ){
  if( map[i][j] == '@' && !isVisited[i][j] ){
    isVisited[i][j] = true;
    visit( isVisited, map, i-1, j );
    visit( isVisited, map, i+1, j );
    visit( isVisited, map, i, j+1 );
    visit( isVisited, map, i, j-1 );
    visit( isVisited, map, i+1, j-1 );
    visit( isVisited, map, i+1, j+1 );
    visit( isVisited, map, i-1, j-1 );
    visit( isVisited, map, i-1, j+1 );
  }

}

int main(){
  int m, n;
  while( cin >> m >> n && m ){
    char map[MAX_MAP_LIMIT+5][MAX_MAP_LIMIT+5] = {0};
 
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++)
          cin >> map[i][j];
    }

    bool isVisited[MAX_MAP_LIMIT+5][MAX_MAP_LIMIT+5] = {0};
    int oilCount = 0;
    for( int i = 0 ; i < m ; i++ ){
      for( int j = 0 ; j < n ; j++ ){
        if( map[i][j] == '@' && !isVisited[i][j] ){
          oilCount++;
          visit( isVisited, map, i, j );
        }
      }
    }

    cout << oilCount << endl;
  }
  return 0;
}

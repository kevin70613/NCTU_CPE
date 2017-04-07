#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    while(cin >> N){
        int seq[N];
        int increase[N];
        int decrease[N];

        for(int i = 0; i < N; i++){
            cin >> seq[i];
            increase[i] = 0;
            decrease[i] = 0;
        }
        
         // find increasing 
        for(int i = 0; i < N; i++){
            for(int j = i + 1; j < N; j++){
                if(seq[i] < seq[j]){
                    increase[j] = max(increase[j], increase[i] + 1);
                }
            }
        }
        
        //for(int i = 0; i < N; i++)
        //   cout << increase[i] << " ";
        //cout << endl;

         // find decreasing
        for(int i = N - 1; i >= 0; i--){
            for(int j = i - 1; j >= 0; j--){
                if(seq[i] < seq[j]){
                    decrease[j] = max(decrease[j], decrease[i] + 1);
                }
            }
        }
        
        //for(int i = 0; i < N; i++)
        //   cout << decrease[i] << " ";
        //cout << endl;

        //int maxinc = 0, maxdec = 0;
        //for(int i = 0; i < N; i++){
        //    if(increase[i] > maxinc)
        //        maxinc = increase[i];
        //}
        //for(int j = 0; j < N; j++){
        //    if(decrease[j] > maxdec)
        //        maxdec = decrease[j];
        //}
        int ans = 0;
        for(int i = 0; i < N; i++)
           ans = max(ans, min(increase[i], decrease[i]));

        //cout << maxinc << " , " << maxdec << endl;

        //cout << 2 * min(maxinc, maxdec) + 1 << endl;
        cout << 2 * ans + 1 << endl;
    }

    return 0;
}
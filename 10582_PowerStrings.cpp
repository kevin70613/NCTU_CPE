#include <iostream>

using namespace std;

int main(){
    string s;
    bool flag = true;
    string temp = "";
    string a;
    while( cin >> s && s != "." ){
        // 判斷是否為 power 2 否則 power 1 (沒有重複)
        for(int i = 0; i < (s.length() / 2); i++){
            temp = "";
            a = s;
             // 重新設定a的size( 多的砍掉 )
            a.resize(i + 1);

            while(temp != s && temp.length() < s.length()){
                temp += a;
            }
            if(temp == s){
                cout << s.length() / a.length() << endl;
                flag = false;
                break;
            }
        }
        if(flag) // power 1 (沒有重複)
           cout << "1" << endl;
        flag = true;
    }
    return 0;
}
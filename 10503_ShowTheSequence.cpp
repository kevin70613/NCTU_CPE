#include <iostream>
#include <stdio.h> 
#include <string.h>

using namespace std;

long long a[128] = {0};
void parsing(char s[]) {
    int sign = 1, i, m = 0;
    char pos;

    for(i = 1; s[i]; i++) {
        // cout << "i = " << i << ", s[i] = " << s[i] << endl;
        if(s[i] == '-') sign = -1;
        else if(s[i] >= '0' && s[i] <= '9') 
            m = m * 10 + s[i] - '0';
        else {
            pos = s[i];
            break;
        }
    }
    m = sign * m;

    if(pos == '+') { 
        parsing(s + i + 1);
        long long d = a[0];
        a[0] = m;
        for(int i = 1; i < 50; i++) {
            long long t = a[i];
            a[i] = a[i - 1] + d;
            d = t;
        }
    } else if(pos == '*') {
        parsing(s + i + 1);
        a[0] *= m;
        for(int i = 1; i < 50; i++)
            a[i] = a[i] * a[i-1];
        
    } else {
        for(int i = 0; i < 50; i++)
            a[i] = m;
    }

}

int main() {
    char s[1024];
    int n;
    
    while(cin >> s >> n) {
        // memset(a, 0, sizeof(a));
        parsing(s);
        int blank = 0;
        for(int i = 0; i < n; i++){
            if(blank == 1) cout << " ";
            cout << a[i];
            blank = 1;
        }
        cout << endl;
    }

    return 0;
}
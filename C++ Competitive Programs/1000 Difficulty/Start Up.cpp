#include <bits/stdc++.h>

using namespace std;
const long long SIZE = 100001;
int main(void){
    char name[SIZE];
    long long length = 0;
    char c;
    while ((c = getchar()) != '\n'){
        if (c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F' || c == 'G' || c == 'J' || c == 'K' || c == 'L' || c == 'N' || c == 'P' 
        || c == 'Q' || c == 'R' || c == 'S' || c == 'Z'){
            cout << "NO" << '\n';
            return 0;
        } else {
            name[length] = c;
            length++;
        }  
    }
    long long begin, end;
    int flag = 1;
    for (begin = 0, end = length - 1; begin < end; begin++, end--){
        if (name[begin] != name[end]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}


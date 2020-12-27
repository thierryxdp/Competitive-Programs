#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int zeros = 0;
    for (int i = 5; i <= n; i += 5){
        int aux = i;
        while (aux % 5 == 0) {
            zeros += 1;
            aux /= 5;
        }
    }
    
    cout << zeros << endl;
    return 0;
}
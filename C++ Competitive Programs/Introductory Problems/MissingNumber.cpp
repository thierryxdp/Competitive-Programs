#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int array[n+1];
    for (int i = 1; i <= n; i++){
        array[i] = 0;
    }
    int t = n - 1;
    while (t--){
        int number;
        cin >> number;
        array[number] = 1;
    }
    for (int i = 1; i <= n; i++){
        if (array[i] == 0) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
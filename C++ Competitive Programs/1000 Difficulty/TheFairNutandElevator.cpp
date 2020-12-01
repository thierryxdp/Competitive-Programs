#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        array[i] = a;
    }
    int best = 0;
    for (int k = 1; k < n; k++){
        best += 2*(array[k]*(k)*2); 
    }
    int calc = 0;
    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            calc += 2*array[j]*(abs(i-j) + j + i);
        }
        best = min(best, calc);
    }
    
    cout << best << endl;
    return 0;
}
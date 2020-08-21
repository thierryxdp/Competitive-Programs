#include <bits/stdc++.h>

using namespace std;
const int MAX = 1e+9;

int main(void){
    int t;
    cin >> t;
    for (int i = 0 ; i < t ; i++){
        int a, b;
        cin >> a >> b;
        if (a >= b){
            int temp = b;
            b = a;
            a = temp;
        }

        if (((a + b) % 3) == 0 && a * 2 >= b){
            cout << "YES" << '\n';
        } else cout << "NO" << '\n';
        
       
    }
    
    return 0;
}
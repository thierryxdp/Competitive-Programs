#include <bits/stdc++.h>
#define MAX 26
using namespace std;

int main(void){
    string s;
    cin >> s;
    int array[MAX];
    char alphabet[MAX];
    for (int i = 0; i < MAX; i++){
        array[i] = 0;
        alphabet[i] = 'A' + i;
    }
    
    for (auto c : s){
        int a = (int) c;
        array[a - 65]++;
    }
    
    int contador = 0;
    for (int i = 0; i < MAX; i++){
        if (array[i] % 2 == 1) contador++;
        if (contador > 1){
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }
    
    int holder = 0;
    for (int i = 0; i < MAX; i++){
        if (array[i] % 2 == 0){
            for (int j = 0; j < array[i]/2; j++){
                cout << alphabet[i];
            }
        } else {
            holder = i;
        }
    }
    if (contador > 0){
        for (int i = 0; i < array[holder] ; i++){
            cout << alphabet[holder];
        }
    }

    for (int i = MAX - 1; i >= 0; i--){
        if (array[i] % 2 == 0){
            for (int j = 0; j < array[i]/2; j++){
                cout << alphabet[i];
            }   
        }
    }
    cout << endl;
    return 0;
}
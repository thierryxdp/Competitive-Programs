#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;

    cin >> input;

    int counter1 = 0, counter0 = 0, i;

    for (i = 0; i < input.length(); i++){
        if (input[i] == '1'){
            counter1++;
            if (counter1 >= 7){
                cout << "YES" << '\n';
                return 0;
            }
            counter0 = 0;
        } else if (input[i] == '0') {
            counter0++;
            if (counter0 >= 7){
                cout << "YES" << '\n';
                return 0;
            }
            counter1 = 0;
        }
         
    }
    cout << "NO" << '\n';
    return 0;
}
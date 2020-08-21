#include <bits/stdc++.h>

const int EVEN = 0;
const int ODD = 1;

using namespace std;

int main(){
    int tests, i;
    cin >> tests;

    for (i = 0; i < tests; i++){
        int array_length, num_elements_choose, state;
        cin >> array_length >> num_elements_choose;
        while (num_elements_choose > 0){
            int even = 0, odd = 0, j, element;
            state = EVEN;
            for (j = 0; j < array_length; j++){
                cin >> element;
                if (element % 2 == 0){
                    even++;
                } else {
                    odd++;
                }
            }
            if (num_elements_choose == array_length){
                state = (odd) % 2;
                break;
            }
            if (odd % 2 == 0 && odd >= 2){
                if (num_elements_choose > odd){
                    num_elements_choose -= (odd - 1);
                    odd -= (odd - 1);
                    state = ODD;
                } else {
                    num_elements_choose--;
                    odd--;
                    state = ODD;
                }
                
            } else if (odd >= 1) {
                num_elements_choose -= odd;
                state = ODD;
            }
            num_elements_choose -= even;
            if (num_elements_choose > 0){
                if (odd % 2 == 0){
                    num_elements_choose -= odd;
                    state = ODD;
                } else {
                    num_elements_choose -= odd;
                    state = EVEN;
                }
            }  

        }
        if (state == EVEN){
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}
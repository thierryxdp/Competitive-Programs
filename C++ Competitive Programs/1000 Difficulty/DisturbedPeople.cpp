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
    
    int flag_1 = 0, flag_2 = 0, flag_3 = 0, zero_flag = 0;

    int k = 0;
    for (int i = 0; i < n; i++){

        if (array[i] == 1 && flag_1 == 0) flag_1 = 1;

        if (array[i] == 0 && flag_1 == 1 && zero_flag == 0) {
            flag_2 = 1;
            zero_flag = 1;
        } else if (array[i] == 0 && flag_1 == 1 && zero_flag == 1){
            flag_1 = 0;
            flag_2 = 0;
            flag_3 = 0;
            zero_flag = 0;
        }
        
        if (array[i] == 1 && flag_2 == 1){
            k++;
            flag_1 = 0;
            flag_2 = 0;
            flag_3 = 0;
            zero_flag = 0;
        }
    }
    cout << k << endl;
    return 0;
}
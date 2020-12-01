#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k;
    cin >> n >> k;
    int array[n];

    for (int i = 0; i < n; i++){
        int colour_house;
        cin >> colour_house;
        array[i] = colour_house;
    }

    int segment = 1, best = 1;

    for (int i = 0; i < n - 1; i++){
        if (array[i+1] != array[i]){
            segment++;
            best = max(best, segment);
        } else {
            segment = 1;
        }
    }
    cout << best << endl;
    return 0;
}
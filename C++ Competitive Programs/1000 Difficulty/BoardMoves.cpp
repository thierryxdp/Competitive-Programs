#include <bits/stdc++.h>

using namespace std;

// number os steps to get to the middle = n/2


int main(void){
    long long maximum = 5e5;
    
    
    
    long long answers[maximum/2];
    
    int contador = 0;
    answers[contador++] = 0;
    for (long long i = 3; i < maximum; i = i + 2){
        answers[contador] = answers[contador - 1] + 2*i*(i/2) + 2*(i-2)*(i/2);
        contador++;
    }
    
    long long t;
    cin >> t;

    while (t){
        long long a;
        cin >> a;
        cout << answers[a/2] << endl;
        t--;
    }
    
    return 0;
}

// 0 1 2 3 4 5 6 7 8
// 1 3 5 7 9 11 13
#include <bits/stdc++.h>

using namespace std;

#define MAX 26

int fatorial(int n){
    if (n == 0 || n == 1) return 1;
    else return n * fatorial(n-1);
}

int main(void){
    string s;
    cin >> s;

    int array[MAX];
    char alphabet[MAX];

    for (int i = 0; i < MAX; i++){
        array[i] = 0;
        alphabet[i] = 'a' + i;
    }
    
    for (int i = 0; i < s.size(); i++){
        int c = (int) s[i];
        array[c - 97]++;
    }
    
    long long m = 1;

    for (int i = 0; i < MAX; i++){
        m /= fatorial(array[i]);
    }
    long long k = fatorial(s.size())/m;

    
    return 0;
}
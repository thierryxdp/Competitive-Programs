#include <bits/stdc++.h>

using namespace std;

int main(void){
    int number_of_planets;
    cin >> number_of_planets;
    int loop = number_of_planets - 1;
    int planets[number_of_planets + 1];
    int i;
    for (i = 1; i <= number_of_planets; i++){
        planets[i] = 0;
    }
    while (loop--){
            int x, y;
            cin >> x >> y;
            planets[x]++;
            planets[y]++;
    }
    int remote_planets = 0;
    for (i = 1; i <= number_of_planets; i++){
        if (planets[i] == 1) remote_planets++;
    }
    cout << remote_planets << '\n';
    return 0;
}
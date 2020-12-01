#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k;

    cin >> n >> k;

    deque<int> d;

    for (int i = 0; i < n; i++){
        int element;
        cin >> element;
        if (element != 0) d.push_back(element);
    }
    
    sort(d.begin(), d.end());
    int sum = 0;
    for (int i = 0; i < k; i++){

        if (d.size() == 0 || d.back() == 0){
            cout << 0 << endl;
        } else {
            int value = d.front();
            d.pop_front();
            d.push_front(value - sum);
            cout << d.front() << endl;
            sum = sum + d.front();
            d.pop_front();

            while ((d.front() - sum) == 0){
                d.pop_front();
            }
        }

    }
    
    return 0;
}
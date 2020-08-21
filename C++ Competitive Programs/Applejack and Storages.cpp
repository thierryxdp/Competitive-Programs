#include <bits/stdc++.h>

using namespace std;



bool square = false, rectangular = false;
multiset <int> s;
multiset <int> rec;
int main(void){

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        s.insert(a);
        if (s.count(a) == 2){
            rec.insert(a);
            rec.insert(a);
        }
        if (s.count(a) > 2){
            rec.insert(a);
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        char c;
        int a;
        cin >> c >> a;
        int counter = 0, new_value;
        if (c == '+'){
            s.insert(a);
            if (s.count(a) == 2){
                rec.insert(a);
                rec.insert(a);
            }
            if (s.count(a) > 2){
                rec.insert(a);
            }
        } else {
            s.erase(s.find(a));
            if (rec.count(a)) rec.erase(rec.find(a));
            if (s.count(a) == 1) rec.erase(a);
        }
        square = false;
        rectangular = false;
        for (auto it = rec.begin(); it != rec.end(); it = rec.upper_bound(*it)){
            //cout << *it << rec.count(*it) << "\n";
            new_value = rec.count(*it) - 4;
            if (rec.count(*it) >= 4 && !square){
                square = true;
                if (new_value >= 4) rectangular = true;
                else if (new_value >= 2) counter++;
            } else if (rec.count(*it) >= 4){
                rectangular = true;
            } else counter++;

            //cout << square << rectangular << counter << new_value <<'\n';
        }
        
        if (square && (counter >= 2 || rectangular)){
            cout <<  "YES";
        } else {
            cout << "NO";
        }
        cout << '\n';
    }
    return 0;
}
